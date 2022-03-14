#include <iostream>
#include <mysql/mysql.h>

struct connection_details{
	const char *server, *user, *password, *database;
};

MYSQL* mysql_connection_setup(struct connection_details mysql_details){
	MYSQL *connection = mysql_init(NULL);    // MySQL instance

	// connect db
	if (!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, mysql_details.database, 0, NULL, 0)){
		std::cout << "Connection Error: " << mysql_error(connection) << std::endl;
		exit(1);
	}

	// if nothing fails when connecting to MySQL db
	return connection;
}

// MySQL result
MYSQL_RES* mysql_execute_query(MYSQL *connection, const char *sql_query){

	// send query to db, if theres an error during connection
	if (mysql_query(connection, sql_query)){
		std::cout << "MySQL Query Error: " << mysql_error(connection) << std::endl;
		exit(1);
	}

	return mysql_use_result(connection);
}

int main()
{
	// creating the references for db
	MYSQL *con;         // the connection
	MYSQL_RES *res;     // the results
	MYSQL_ROW row;      // the results (in array)

	// initialising the database
	struct connection_details mysqlDB;
	mysqlDB.server = "localhost";
	mysqlDB.user = "root";
	mysqlDB.password = "Python2020!!";
	mysqlDB.database = "mydatabase";

	con = mysql_connection_setup(mysqlDB);    // connect to the mysql database
    res = mysql_perform_query(con, "select * from tblUsers;");
	//res = mysql_perform_query(con, "select * from tblUsers;");    // get the results from executing commands the data table is called tblUsers

	std::cout << "Displaying database output:\n" << std::endl;

	while ((row = mysql_fetch_row(res)) != NULL){
		std::cout << row[0] << " | " << row[1] << " | " << row[2] << " | " << row[3] << " | " << row[4] << std::endl << std::endl;
	}

	//clean the db result
	mysql_free_result(res);

	//close db connection
	mysql_close(con);


	return(0);
}
