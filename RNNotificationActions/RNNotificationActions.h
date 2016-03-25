@import UIKit;

#import "RCTBridgeModule.h"

@interface FuncPointer : NSObject
@property (nonatomic, strong) NSMutableDictionary *completeCallbacks;

+(FuncPointer*) sharedInstance;
@end

@interface RNNotificationActions : NSObject <RCTBridgeModule>

+ (void)application:(UIApplication *)application handleActionWithIdentifier:(NSString *)identifier forRemoteNotification:(NSDictionary *)userInfo withResponseInfo:(NSDictionary *)responseInfo completionHandler:(void (^)())completionHandler;
+ (void)application:(UIApplication *)application handleActionWithIdentifier:(NSString *)identifier forLocalNotification:(UILocalNotification *)notification withResponseInfo:(NSDictionary *)responseInfo completionHandler:(void (^)())completionHandler;

@end