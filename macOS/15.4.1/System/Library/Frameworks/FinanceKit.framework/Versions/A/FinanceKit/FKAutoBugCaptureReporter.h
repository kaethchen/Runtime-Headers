@interface FKAutoBugCaptureReporter : NSObject

- (BOOL)isRunningUnitTests;
- (void)reportIssueWithDomain:(id)a0 type:(id)a1 subtype:(id)a2 subtypeContext:(id)a3 payload:(id)a4;
- (void)handleResponse:(id)a0;
- (BOOL)isExpectedFailureReason:(int)a0;
- (BOOL)shouldReportIssue;

@end
