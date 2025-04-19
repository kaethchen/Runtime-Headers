@class NSString, NSArray, NSError, _TtC7GameKit28GKChallengeDefinitionSupport;

@interface GameKit.GKChallengeDefinitionSupport : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ leaderboardLoader;
    void /* unknown type, empty encoding */ localPlayerIDProvider;
}

@property (class, nonatomic, readonly) _TtC7GameKit28GKChallengeDefinitionSupport *shared;

- (id)init;
- (void).cxx_destruct;
- (void)hasActiveChallengesWithDefinitionID:(NSString *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;
- (void)loadChallengeDefinitionsWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;

@end
