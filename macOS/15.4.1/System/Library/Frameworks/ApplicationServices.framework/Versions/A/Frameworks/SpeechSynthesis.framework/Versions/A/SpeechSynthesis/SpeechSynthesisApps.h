@class NSXPCConnection;

@interface SpeechSynthesisApps : NSObject <SpeechSynthesisServerXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedManager;

- (id)init;
- (void)getSpeakingStateWithCompletionHandler:(id /* block */)a0;
- (void)startSpeakingSelectionWithFallback:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopSpeakingSelectionWithCompletionHandler:(id /* block */)a0;

@end
