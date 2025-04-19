@class NSArray;
@protocol CalDAVReportJunkTaskGroupDelegate;

@interface CalDAVReportJunkTaskGroup : CoreDAVTaskGroup {
    NSArray *_reportJunkActions;
}

@property (weak, nonatomic) id<CalDAVReportJunkTaskGroupDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithReportJunkActions:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;
- (void)startTaskGroup;

@end
