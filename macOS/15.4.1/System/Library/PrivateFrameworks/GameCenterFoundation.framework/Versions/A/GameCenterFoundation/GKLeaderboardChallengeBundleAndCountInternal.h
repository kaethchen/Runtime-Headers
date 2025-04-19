@class NSString, NSNumber;

@interface GKLeaderboardChallengeBundleAndCountInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *count;

+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
