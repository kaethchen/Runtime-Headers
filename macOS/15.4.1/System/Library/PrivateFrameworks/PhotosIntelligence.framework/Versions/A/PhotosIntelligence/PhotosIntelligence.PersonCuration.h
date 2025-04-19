@interface PhotosIntelligence.PersonCuration : NSObject

+ (id)fetchCuratedAssetsForPerson:(id)a0 options:(id)a1 useSummary:(BOOL)a2;
+ (id)fetchCuratedAssetsForSocialGroup:(id)a0 options:(id)a1 useSummary:(BOOL)a2 includeOthersInSocialGroupAssets:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;

@end
