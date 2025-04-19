@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)titleText;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
