#include <iostream>  
#include <string>  
#include <json/json.h>
#include<ctime>
using namespace std;
 
 
int main(void)  
{      
    std::cout << "|==================|" << std::endl;
    std::cout << "|| jsonCpp  output||" << std::endl;
    std::cout << "|==================|" << std::endl;
	  const char* strjson = "{\"travelId\":123456,\"isCompleted\":1, \"avgSpeed\":18, \"maxSpeed\":62, \"posCount\":248, \"totalSpeed\":4668,\"startPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":196, \"speed\":0, \"direction\":0}, \"stopPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":1972, \"speed\":0, \"direction\":10}, \"travelMileage\":1776, \"travelOil\":370, \"travelPeriod\":930, \"drivePeriod\":930, \"overSpeedCount\":0, \"celerateCount\":0, \"decelerateCount\":0, \"stopACCOnCount\":0, \"startFlag\":2, \"stopFlag\":5, \"startEventId\":123456,\"stopEventId\":123456,\"stayId\":123456,\"remark\":\"[OBD]启动->[OBD]熄火\", \"seqFaultCode\":[]}";
/*
{	
	"key1":"value1",
	"array":
	[
		{"key2":"value2"},
		{"key2":"value3"},
		{"key2":"value4"}
	]
}
*/  
/*
{
    "travelId": 405777136545222656,
    "isCompleted": 1,
    "avgSpeed": 18,
    "maxSpeed": 62,
    "posCount": 248,
    "totalSpeed": 4668,
    "startPos": {
        "gpsTime": 1606210403,
        "rcvTime": 1606210407,
        "mileage": 196,
        "speed": 0,
        "direction": 0
    },
    "stopPos": {
        "gpsTime": 1606211333,
        "rcvTime": 1606211342,
        "mileage": 1972,
        "speed": 0,
        "direction": 10
    },
    "travelMileage": 1776,
    "travelOil": 370,
    "travelPeriod": 930,
    "drivePeriod": 930,
    "overSpeedCount": 0,
    "celerateCount": 0,
    "decelerateCount": 0,
    "stopACCOnCount": 0,
    "startFlag": 2,
    "stopFlag": 5,
    "startEventId": 405777136545222657,
    "stopEventId": 405777136545222658,
    "stayId": 405777262424674304,
    "remark": "[OBD]启动->[OBD]熄火",
    "seqFaultCode": []
}
*/
    clock_t startTime,endTime;
    startTime = clock();//计时开始
    for (int i = 0; i < 10000000; i++) {
	  Json::Reader reader;  
 	  Json::Value root;  
    if (reader.parse(strjson, root)){

  }
  
	
/*	if (reader.parse(strjson, root))  
	{  
		int travelId = root["travelId"].asInt();
    //std::cout << travelId << std::endl;
    int isCompleted = root["isCompleted"].asInt();
    //std::cout << isCompleted << std::endl;
    int avgSpeed = root["avgSpeed"].asInt();
    int maxSpeed = root["maxSpeed"].asInt(); 
    int posCount = root["posCount"].asInt(); 
    int totalSpeed = root["totalSpeed"].asInt();
    int travelMileage = root["travelMileage"].asInt();
    int travelOil = root["travelOil"].asInt();
    int travelPeriod = root["travelPeriod"].asInt();
    int drivePeriod = root["drivePeriod"].asInt();
    int overSpeedCount = root["overSpeedCount"].asInt();
    int celerateCount = root["celerateCount"].asInt();
    int decelerateCount = root["decelerateCount"].asInt();
    int stopACCOnCount = root["stopACCOnCount"].asInt();
    int startFlag = root["startFlag"].asInt();
    int stopFlag = root["stopFlag"].asInt();
    int startEventId = root["startEventId"].asInt();
    int stopEventId = root["stopEventId"].asInt();
    int stayId = root["stayId"].asInt();
    std::string remark = root["remark"].asString();
		//std::cout << out << std::endl;  
		Json::Value arrayObj = root["startPos"];  
		for (int i=0; i<arrayObj.size(); i++)  
		{  
			int gpsTime = arrayObj[i]["gpsTime"].asInt();
      int rcvTime = arrayObj[i]["rcvTime"].asInt();
      int mileage = arrayObj[i]["mileage"].asInt();
      int speed = arrayObj[i]["speed"].asInt();
      int direction = arrayObj[i]["direction"].asInt();  
			//std::cout << out << std::endl;  
		}
    arrayObj = root["stopPos"];  
		for (int i=0; i<arrayObj.size(); i++)  
		{  
			 int gpsTime = arrayObj[i]["gpsTime"].asInt();
       int rcvTime = arrayObj[i]["rcvTime"].asInt();
       int mileage = arrayObj[i]["mileage"].asInt();
       int speed = arrayObj[i]["speed"].asInt();
       int direction = arrayObj[i]["direction"].asInt();  
			//std::cout << out << std::endl;  
		}
	}*/
    }
	   endTime = clock();//计时结束
     cout << "The run time is: " <<(float)(endTime - startTime) / CLOCKS_PER_SEC * 1000.0<< "ms" << endl;
    
	return 0;  
}


