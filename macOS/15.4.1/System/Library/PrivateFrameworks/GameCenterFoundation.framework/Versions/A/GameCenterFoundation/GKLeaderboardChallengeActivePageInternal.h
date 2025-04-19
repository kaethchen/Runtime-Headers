@class NSArray, NSString;

@interface GKLeaderboardChallengeActivePageInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *actives;
@property (retain, nonatomic) NSString *nextURL;

+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
