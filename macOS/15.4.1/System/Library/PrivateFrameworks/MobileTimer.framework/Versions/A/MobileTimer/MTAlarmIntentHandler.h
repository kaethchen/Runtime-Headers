@class MTAlarmManager;

@interface MTAlarmIntentHandler : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager;

+ (id)createUserInfoWithIntentName:(id)a0 alarmIDString:(id)a1 time:(id)a2 label:(id)a3;

- (void).cxx_destruct;
- (id)initWithAlarmManager:(id)a0;

@end
