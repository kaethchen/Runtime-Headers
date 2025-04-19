@class NSMutableDictionary, NSURLCredential, NSMutableSet, NSLock;

@interface SUSharedAuthenticationHandler : NSObject {
    NSMutableDictionary *_certValidatedByHost;
    BOOL _evCheckingDisabledByPref;
    NSMutableSet *_disabledHosts;
}

@property (retain, nonatomic) NSLock *stateLock;
@property (copy) NSURLCredential *stashedURLCredential;

+ (id)sharedAuthenticationHandler;

- (void)dealloc;
- (id)init;
- (void)_handleAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setCertValidated:(BOOL)a0 forHost:(id)a1;
- (BOOL)certValidatedForURL:(id)a0;
- (id /* block */)challengeBlock;
- (void)disableHostForEVCheck:(id)a0;
- (void)enableHostForEVCheck:(id)a0;
- (BOOL)evValidatedForURL:(id)a0;
- (id /* block */)extendedChallengeBlock;
- (BOOL)isHostDiabledForEVCheck:(id)a0;

@end
