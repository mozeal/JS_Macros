//
//  JS_Macros.h
//  PinnShop
//
//  Created by mozeal on 6/13/2557 BE.
//  Copyright (c) 2557 Jimmy Software. All rights reserved.
//

#ifndef PinnShop_JS_Macros_h
#define PinnShop_JS_Macros_h


#define BUNDLE_NAME [[[NSBundle mainBundle] infoDictionary]objectForKey:@"CFBundleExecutable"]
#define DISPLAY_NAME [[[NSBundle mainBundle] infoDictionary]objectForKey:@"CFBundleName"]
#define BUNDLE_VERSION [[[NSBundle mainBundle] infoDictionary]objectForKey:@"CFBundleVersion"]
#define BUNDLE_SHORT_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

#define HOME_FOLDER NSHomeDirectory()
#define APPLICATION_FOLDER [NSString stringWithFormat:@"%@/%@.app", NSHomeDirectory(), BUNDLE_NAME]
#define DOCUMENTS_FOLDER [NSString stringWithFormat:@"%@/Documents", NSHomeDirectory()]
#define CACHE_FOLDER [NSString stringWithFormat:@"%@/Library/Caches", NSHomeDirectory()]
#define RESOURCE_FOLDER [[NSBundle mainBundle] resourcePath]

#define SCREENSIZE [UIScreen mainScreen].bounds.size
#define SCREENSCALE [UIScreen mainScreen].scale

#define OS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

// 7.0 and above
#define IS_DEVICE_RUNNING_IOS_7_AND_ABOVE() ([[[UIDevice currentDevice] systemVersion] compare:@"7.0" options:NSNumericSearch] != NSOrderedAscending)

// 6.0, 6.0.x, 6.1, 6.1.x
#define IS_DEVICE_RUNNING_IOS_6_OR_BELOW() ([[[UIDevice currentDevice] systemVersion] compare:@"6.2" options:NSNumericSearch] != NSOrderedDescending)

#define IS_IPHONE5 (([[UIScreen mainScreen] bounds].size.height-568)?NO:YES)
#define IS_OS_5_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0)
#define IS_OS_6_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IS_OS_8_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#ifndef DLog
#ifdef DEBUG
#define DLog(...) NSLog(__VA_ARGS__)
#define ILogPlus(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define ILog(...) NSLog(@"%s [Line %d] ", __PRETTY_FUNCTION__, __LINE__);
#else
#define DLog(...) /* */
#define ILogPlus(...) /* */
#define ILog(...) /* */
#endif
#endif
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);


#endif
