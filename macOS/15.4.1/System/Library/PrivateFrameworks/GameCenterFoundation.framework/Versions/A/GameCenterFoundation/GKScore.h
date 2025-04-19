@class NSString, GKGame, GKPlayer, GKScoreInternal, NSDate;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (retain) GKScoreInternal *internal;
@property (readonly, retain) NSString *playerID;
@property long long rank;
@property (copy) NSString *formattedValue;
@property (retain) NSString *groupLeaderboardIdentifier;
@property BOOL valueSet;
@property (retain) GKGame *game;
@property long long value;
@property (copy) NSString *leaderboardIdentifier;
@property unsigned long long context;
@property (readonly, retain) NSDate *date;
@property (readonly, retain) GKPlayer *player;
@property (nonatomic) BOOL shouldSetDefaultLeaderboard;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void)reportScores:(id)a0 whileScreeningChallenges:(BOOL)a1 withEligibleChallenges:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)reportScores:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithInternalRepresentation:(id)a0;
- (id)initWithCategory:(id)a0;
- (id)playerID;
- (id)initWithInternalRepresentation:(id)a0 playerID:(id)a1;
- (id)initWithInternalRepresentation:(id)a0 playerInternal:(id)a1;
- (id)initWithLeaderboardIdentifier:(id)a0;
- (id)initWithLeaderboardIdentifier:(id)a0 forPlayer:(id)a1;
- (id)initWithLeaderboardIdentifier:(id)a0 player:(id)a1;
- (void)reportScoreWithCompletionHandler:(id /* block */)a0;

@end
