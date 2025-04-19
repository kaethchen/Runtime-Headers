@class NSString, NSDate;

@interface _AMiCalSoundAlarm : _AMiCalItem

@property long long triggerInterval;
@property (copy) NSString *soundName;
@property (copy) NSString *soundFile;
@property (copy) NSDate *triggerDate;

@end
