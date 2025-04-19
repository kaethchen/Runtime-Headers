@interface SiriSharedUIReplayUtilityWrapper : NSObject

+ (id)sharedInstance;
+ (void)setReplayEnabled:(BOOL)a0;
+ (void)setReplayOverridePath:(id)a0;
+ (void)registerReplayCallback:(id /* block */)a0;
+ (void)replayAll:(unsigned long long)a0 from:(id)a1 completion:(id /* block */)a2;
+ (void)replayAt:(unsigned long long)a0 from:(id)a1;
+ (BOOL)shouldSkipAutoDismissal;

- (void)speechRecognized:(id)a0;
- (BOOL)isReplaying;
- (void)receivedReplayCommand:(id)a0;
- (void)registerReplayCallback:(id /* block */)a0;
- (void)receivedCommand:(id)a0;
- (void)addReplayControlTo:(id)a0;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
