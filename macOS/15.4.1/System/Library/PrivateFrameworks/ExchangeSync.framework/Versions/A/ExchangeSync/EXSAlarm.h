@class NSString, NSURL, NSDate;

@interface EXSAlarm : NSObject

@property (nonatomic) double relativeOffset;
@property (retain, nonatomic) NSDate *absoluteDate;
@property (nonatomic) long long alarmType;
@property (retain, nonatomic) NSString *reminderEmailDestination;
@property (retain, nonatomic) NSString *soundName;
@property (retain, nonatomic) NSURL *url;

+ (id)createAlarmFromPropertiesDictionary:(id)a0;
+ (id)createAlarmFromValues:(double)a0 alarmTime:(id)a1 reminderType:(long long)a2 reminderEmail:(id)a3 soundName:(id)a4 urlTrigger:(id)a5;

- (void).cxx_destruct;
- (id)deriveJSONrepresentation;

@end
