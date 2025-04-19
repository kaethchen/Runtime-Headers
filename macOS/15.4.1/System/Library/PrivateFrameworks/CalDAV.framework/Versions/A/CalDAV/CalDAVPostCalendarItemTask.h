@class NSString;
@protocol CalDAVPostCalendarItemTaskDelegate;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask

@property (nonatomic) id<CalDAVPostCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)description;
- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
