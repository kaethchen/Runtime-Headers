@interface AMEventKitSoftLinking : NSObject

+ (void *)framework;
+ (Class)EKEvent;
+ (Class)EKCalendar;
+ (id)EKErrorDomain;
+ (Class)EKReminder;
+ (Class)EKAlarm;
+ (Class)EKCalendarItem;
+ (Class)EKEventStore;
+ (void)softLink;

@end
