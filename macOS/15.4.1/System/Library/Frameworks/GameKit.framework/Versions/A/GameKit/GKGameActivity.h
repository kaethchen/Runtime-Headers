@class NSError, NSString, NSURL, NSDate, NSSet, NSArray, NSDictionary, GKMatch;

@interface GKGameActivity : NSObject {
    void /* unknown type, empty encoding */ _instanceSnapshot;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _achievements;
    void /* unknown type, empty encoding */ _leaderboardScores;
    void /* unknown type, empty encoding */ validPartyCodeAlphabets;
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ participantStates;
    void /* unknown type, empty encoding */ consumptionState;
    void /* unknown type, empty encoding */ updateTrigger;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ gsTimer;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ activityDefinition;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSString *partyCode;
@property (nonatomic, readonly) NSURL *partyURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *lastResumeDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSSet *achievements;
@property (nonatomic, readonly) NSSet *leaderboardScores;
@property (nonatomic, copy) NSArray *validPartyCodeAlphabets;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ creator;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ initiatedByApple;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ referralLeaderboard;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ referralAchievement;
@property (nonatomic, readonly) NSSet *participants;
@property (nonatomic, readonly) NSDictionary *participantStates;
@property (nonatomic, readonly) NSString *shortGroupID;
@property (nonatomic, readonly) NSString *consumptionState;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ support;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lastUpdateTime;

+ (void)checkPendingGameActivityExistenceWithCompletionHandler:(void (^)(BOOL))a0;
+ (void)createFromGameActivityInstance:(id)a0 completionHandler:(void (^)(GKGameActivity *, NSError *))a1;
+ (BOOL)isValidPartyCode:(id)a0;
+ (void)resumedGameActivityFromSnapshot:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)startWithDefinition:(id)a0 error:(id *)a1;
+ (id)startWithDefinition:(id)a0 partyCode:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)start;
- (void)end;
- (id)initWithDefinition:(id)a0;
- (void)snapshotWithCompletionHandler:(id /* block */)a0;
- (void)_setScoreOnLeaderboard:(id)a0 to:(long long)a1 with:(long long)a2 for:(id)a3;
- (void)markAsProcessed;
- (void)_removeScoresFromLeaderboard:(id)a0;
- (void)findMatchWithCompletionHandler:(void (^)(GKMatch *, NSError *))a0;
- (void)findPlayersForHostedMatchWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (id)getProgressOnAchievement:(id)a0;
- (id)getScoreOnLeaderboard:(id)a0;
- (id)initWithActivityDefinition:(id)a0 partyCode:(id)a1 creator:(id)a2 initiatedByApple:(BOOL)a3 referralLeaderboard:(id)a4 referralAchievement:(id)a5 support:(id)a6 error:(id *)a7;
- (id)initWithIdentifier:(id)a0 activityDefinition:(id)a1 properties:(id)a2 state:(unsigned long long)a3 partyCode:(id)a4 creationDate:(id)a5 startDate:(id)a6 lastResumeDate:(id)a7 endDate:(id)a8 duration:(double)a9 achievements:(id)a10 leaderboardScores:(id)a11 creator:(id)a12 initiatedByApple:(BOOL)a13 referralLeaderboard:(id)a14 referralAchievement:(id)a15 participants:(id)a16 participantStates:(id)a17 shortGroupID:(id)a18 consumptionState:(id)a19 support:(id)a20 error:(id *)a21;
- (void)removeAchievements:(id)a0;
- (void)removeScoresFromLeaderboards:(id)a0;
- (void)setAchievementCompleted:(id)a0;
- (void)setProgressOnAchievement:(id)a0 toPercentComplete:(double)a1;
- (void)setScoreOnLeaderboard:(id)a0 toScore:(long long)a1;
- (void)setScoreOnLeaderboard:(id)a0 toScore:(long long)a1 context:(long long)a2;
- (id)setupMatchRequestAndReturnError:(id *)a0;
- (void)setupUpdateSubscription;

@end
