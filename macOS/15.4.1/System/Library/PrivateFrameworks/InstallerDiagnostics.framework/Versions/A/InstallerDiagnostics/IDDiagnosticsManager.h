@interface IDDiagnosticsManager : NSObject

+ (id)sharedManager;

- (void)startNewInstall;
- (void)finishInstall;
- (void)recordDiagnosticMessage:(long long)a0 withData:(id)a1;
- (void)clearSingleDiagnosticMessage:(long long)a0;
- (void)finishMessageTransport;
- (void)recordBeginningOfQueueElement:(id)a0;
- (void)recordCompletionOfQueueElement:(id)a0 withDuration:(double)a1;
- (void)recordFactoryInstall;
- (void)startMessageTransport;

@end
