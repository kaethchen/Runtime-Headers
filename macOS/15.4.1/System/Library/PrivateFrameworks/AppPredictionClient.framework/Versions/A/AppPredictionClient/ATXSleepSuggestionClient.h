@class NSXPCConnection;

@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void).cxx_destruct;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;

@end
