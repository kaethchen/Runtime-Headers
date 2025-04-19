@class NSString, NSMutableSet;

@interface KHPhotoLibraryGenericSource : KHPhotoLibraryGenericBaseObject <KHPhotoLibrarySource>

@property (readonly, nonatomic) NSMutableSet *hydrationCompletionBlocks;
@property (nonatomic) unsigned long long totalNumberOfImages;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id iconImage;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) BOOL needsHydration;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hydrating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)image;
- (id)sectionAtIndex:(unsigned long long)a0;
- (BOOL)canHandleURL:(id)a0;
- (id)sectionForIdentifier:(id)a0;
- (id)collectionForIdentifier:(id)a0;
- (id)collectionsTreeAsArrayUpToCollection:(id)a0;
- (id)photoWithURL:(id)a0;
- (void)postHydrationBeganNotification;
- (void)postHydrationCompletedNotification;

@end
