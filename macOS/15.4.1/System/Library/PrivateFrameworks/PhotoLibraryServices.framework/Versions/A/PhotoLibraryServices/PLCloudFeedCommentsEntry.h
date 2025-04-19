@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSString *entryCloudAssetGUID;
@property (retain, nonatomic) NSOrderedSet *entryLikeComments;
@property (retain, nonatomic) NSOrderedSet *entryComments;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryLikeComments;
@property (readonly, weak, nonatomic) NSMutableOrderedSet *mutableEntryComments;

+ (id)entityName;

- (void)willSave;
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)a0;

@end
