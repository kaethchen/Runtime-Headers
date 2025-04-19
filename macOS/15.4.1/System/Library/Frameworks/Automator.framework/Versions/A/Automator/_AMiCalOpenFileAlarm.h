@class NSString, NSDate;

@interface _AMiCalOpenFileAlarm : _AMiCalItem

@property long long triggerInterval;
@property (copy) NSString *filepath;
@property (copy) NSDate *triggerDate;

@end
