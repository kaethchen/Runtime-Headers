@interface IDSEventReportingManager : NSObject

- (void)reportClientEvent:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)serverEnabledEventReporting;

@end
