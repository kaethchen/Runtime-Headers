@class NSString, NSArray;

@interface GKChallengeDefinition : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ groupIdentifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ details;
    void /* unknown type, empty encoding */ __attemptLimitOptions;
    void /* unknown type, empty encoding */ durationOptions;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) NSArray *attemptLimitOptions;
@property (nonatomic, readonly) NSArray *durationOptions;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ leaderboard;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageUrl;

+ (void)loadChallengeDefinitionsWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;
- (void)hasActiveChallengesWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 groupIdentifier:(id)a1 title:(id)a2 details:(id)a3 attemptLimitOptions:(id)a4 durationOptions:(id)a5 leaderboard:(id)a6 imageUrl:(id)a7;

@end
