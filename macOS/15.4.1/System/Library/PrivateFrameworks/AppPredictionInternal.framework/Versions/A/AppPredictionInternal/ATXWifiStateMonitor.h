@class NSString;

@interface ATXWifiStateMonitor : NSObject

@property (readonly, nonatomic) NSString *SSID;

+ (id)sharedInstance;

@end
