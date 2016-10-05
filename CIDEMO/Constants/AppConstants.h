//
//  AppConstants.h
//  CoreTalk
//
//  Created by Krish on 29/03/13.
//  Copyright (c) 2013 KCS. All rights reserved.



//*********************** Application shared delegate *************************//
#define appSharedDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])


//*********************** SCREEN SIZE FOR IPHONE *************************//
#define IS_iPHONE6 ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width) == 667)
#define IS_iPHONE6Plus ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width) == 736)
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

//*******************************

#define DB_NAME @"MagnitudeGold.sqlite"
#define GTRACKID @"UA-83052367-1"  //UA-82656611-1
//#define MODULE_SEEN_CLIENT @"SeenClient"
//#define MODULE_ANALYSIS @"Analysis"
//#define MODULE_FEEDBACK @"Feedback"
//#define MODULE_SNAPSHOT @"Snapshot"

#define MODULE_SEEN_CLIENT 4
#define MODULE_ANALYSIS 3
#define MODULE_FEEDBACK 1
#define MODULE_SNAPSHOT 2


#define USERNAME @"username"
#define PASSWORD @"password"

#define MAX_LENGTH_MOBILE_NUMBER 15
#define MAX_LENGTH_EMAIL 50
#define MAX_LENGTH_CUSTOMER_NAME 100
#define MAX_LENGTH_COMMENTS 200

//************************* DATE FORMAT *********************//

#define DATE_FORMAT_WS @"yyyy-MM-dd"
#define LONGDATEFORMAT @"yyyy-MM-dd HH:mm:ss"
#define DATE_FORMAT_DISPLAY @"MM/dd/yyyy"
#define DATE_TIME_DISPLAY @"MM/dd/yyyy hh:mm a"

#define TIMEFORMAT_SEND @"HH:mm:ss"
#define TIMEFORMAT_DISPLAY @"hh:mm a"


//**********************  VALIDATION  *******************//
#define MAX_LENGTH_ASSOCIATE_NAME 20
#define MAX_LENGTH_ASSOCIATE_MOBILE_NUMBER 15
#define MAX_LENGTH_ASSOCIATE_EMAIL_ID 50
#define MAX_LENGTH_ASSOCIATE_DESCRIPTION 100
#define MAX_LENGTH_CLIENT_NAME 20
#define MAX_LENGTH_CLIENT_SURNAME 20
#define MAX_LENGTH_CLIENT_ADDRESS 100
#define MAX_LENGTH_CLIENT_CITY 20
#define MAX_LENGTH_SHOESSIZE 2
#define MAX_LENGTH_WEIGHT 3
#define MAX_LENGTH_PREFFERD_CALL_TIME 20
#define MAX_LENGTH_CLIENT_EMAIL_ID 50
#define MAX_LENGTH_CLIENT_MOBILE 10
#define LEGALCHARACTERS_FOR_PHONE_NO "1234567890"
#define MAX_PRODUCT_QUANTITY 99

//********************** APP IMAGES *******************//
#define DYNAMIC_IMAGENAME_SPLASHSCREENBG @"splashscreen"
#define DYNAMIC_IMAGENAME_HOMESCREENBG @"homescreenbg"
#define DYNAMIC_IMAGENAME_LOGINBG @"loginbg"
#define DYNAMIC_IMAGENAME_LOGOHOME @"logohome"
#define DYNAMIC_IMAGENAME_LOGOLOGIN @"logologin"
#define DYNAMIC_IMAGENAME_MAINBG @"mainbg"
#define DYNAMIC_IMAGENAME_FOOTER @"footer"


#define NOTIFICATION_MAINBG_DOWNLOADED    @"MAINBG_DOWNLOADED"
#define NOTIFICATION_FOOTER_DOWNLOADED    @"FOOTER_DOWNLOADED"
#define NOTIFICATION_SPLASHSCREENBG_DOWNLOADED @"SPLASHSCREENBG_DOWNLOADED"
#define NOTIFICATION_LOGOHOME_DOWNLOADED  @"LOGOHOME_DOWNLOADED"
#define NOTIFICATION_LOGOLOGIN_DOWNLOADED @"LOGOLOGIN_DOWNLOADED"


#define KEY_FOR_GET_UNIQUE_UUID @"keyOfGetUniqueUUID"
#define KEY_FOR_GET_SERVERDATETIME @"serverDatetime"
#define KEY_FOR_GET_TERMS @"TermsAndCondition"

//*********************** APP FONTS SIZE AND NAME *******************//

#define FN_SEGOE_REGULAR @"SegoeUI"
#define FN_SEGOE_SEMILIGHT @"SegoeUI-Semilight"
#define FN_SEGOE_BOLD @"SegoeUI-Semibold"
#define FN_SEGOE_ITALIC @"SegoeUI-Italic"
#define FN_SEGOE_BOLDITALIC @"SegoeUI-SemiboldItalic"

#define DYNAMIC_FORM_FONTSIZE 12
//*********************** COLOR *******************//

#define COLOR_TEXT_GREEN [UIColor colorWithRed:53.0/255 green:165.0/255 blue:43.0/255 alpha:1.0f]
#define SELECTED_TEXT_COLOR [UIColor colorWithRed:59.0/255.0 green:59.0/255.0 blue:54.0/255.0 alpha:1.0]
#define UNSELECTED_TEXT_COLOR [UIColor colorWithRed:133.0/255.0 green:133.0/255.0 blue:128.0/255.0 alpha:1.0]


#define BLACKCOLOR          @"#000000"
#define WHITECOLOR          @"#ffffff"
#define YELLOWCOLOR         @"#fff5c5"
#define GREENCOLOR          @"#d7ffc9"
#define GRAYCOLOR           @"#515153"
#define GRYWHITECOLOR       @"#f1f1f3"
#define SRCHTINTCOLOR       @"#9ab2c3"
#define BLUECOLOr           @"#325885"
#define SKYBLUECOLOR        @"#96C8FF"

#define Rgb2UIColor(r, g, b) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:1.0]

#define Rgb2UIColorWithAlpha(r, g, b, a) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:(a)]

#define Hex2UIColor(HexString) [UIColor colorWithHex:HexString alpha:1.0]
#define Hex2UIColorWithAlpha(HexString, a) [UIColor colorWithHex:HexString alpha:(a)]
//*********************** TYPE OF POPUP ALERTS *******************//

#define NUMBERS_ONLY @"1234567890"
#define CHARACTER_LIMIT 10
#define TEXTVIEWCHARACTER_LIMIT 180

//*********************** REMOVE ALL NSLOG *******************//
#ifdef DEBUG
#   define NSLog(...) NSLog(__VA_ARGS__)
#else
#   define NSLog(...)
#endif

