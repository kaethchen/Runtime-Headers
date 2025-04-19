@class NSString, NSCalendar;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {
    NSCalendar *calendar;
    unsigned long long calendarUnitFlags;
    NSString *appName;
    char *app;
    unsigned long long appLen;
    NSString *processID;
    char *pid;
    unsigned long long pidLen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

@end
