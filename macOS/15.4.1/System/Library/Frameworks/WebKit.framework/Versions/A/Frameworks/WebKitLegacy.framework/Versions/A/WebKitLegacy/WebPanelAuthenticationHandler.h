@class NSMapTable;

@interface WebPanelAuthenticationHandler : NSObject {
    NSMapTable *windowToPanel;
    NSMapTable *challengeToWindow;
    NSMapTable *windowToChallengeQueue;
}

+ (id)sharedHandler;

- (void)dealloc;
- (id)init;
- (void)_authenticationDoneWithChallenge:(id)a0 result:(id)a1;
- (void)cancelAuthentication:(id)a0;
- (void)enqueueChallenge:(id)a0 forWindow:(id)a1;
- (void)startAuthentication:(id)a0 window:(id)a1;
- (void)tryNextChallengeForWindow:(id)a0;

@end
