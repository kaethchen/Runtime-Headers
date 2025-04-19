@interface PGSocialGroupsPromoter : NSObject

+ (id)ingestUserVerifiedSocialGroupsFromPhotoLibrary:(id)a0 intoGraph:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)promoteSocialGroupsInGraph:(id)a0 photoLibrary:(id)a1 maxNumberOfElectedSocialGroups:(long long)a2 progressReporter:(id)a3 persistGroups:(BOOL)a4 error:(id *)a5;

- (id)init;
- (void).cxx_destruct;

@end
