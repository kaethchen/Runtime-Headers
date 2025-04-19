@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask

@property (nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)description;
- (void).cxx_destruct;
- (id)additionalHeaderValues;

@end
