@class NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSOrderedSet *entryAssets;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryAssets;

+ (id)entityName;

- (void)willSave;
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)a0;

@end
