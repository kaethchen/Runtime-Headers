@interface GDPersonRankingServiceConfiguration : NSObject

@property (readonly, nonatomic) double isFavoriteMultiplier;
@property (readonly, nonatomic) double emergencyContactMultiplier;
@property (readonly, nonatomic) double iCloudFamilyMemberMultiplier;
@property (readonly, nonatomic) double relationshipTagMultiplier;

- (id)init;
- (id)initWithIsFavoriteMultiplier:(double)a0 emergencyContactMultiplier:(double)a1 iCloudFamilyMemberMultiplier:(double)a2 relationshipTagMultplier:(double)a3;

@end
