@interface PXPhotosIntelligenceBridge : NSObject

+ (id)fetchFeaturedPhotoAssetsWithPhotoLibrary:(id)a0 sharingFilter:(unsigned short)a1;
+ (id)fetchFeaturedPhotoSuggestionsWithPhotoLibrary:(id)a0 sharingFilter:(unsigned short)a1 fetchLimit:(long long)a2;

- (id)init;

@end
