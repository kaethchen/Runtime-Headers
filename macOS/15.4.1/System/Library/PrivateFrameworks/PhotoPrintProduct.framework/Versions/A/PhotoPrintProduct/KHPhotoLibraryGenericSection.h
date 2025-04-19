@class NSString, NSArray, NSMutableArray, NSLock;
@protocol KHPhotoGroupCollectionDelegate;

@interface KHPhotoLibraryGenericSection : NSObject <KHPhotoLibrarySection, KHPhotoGroupCollectionProtocol> {
    id<KHPhotoGroupCollectionDelegate> _pageLayoutDelegate;
    NSMutableArray *_collections;
    NSLock *_collectionsLock;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long numberOfCollections;
@property (readonly, nonatomic) NSArray *allCollections;
@property (readonly, nonatomic) BOOL needsHydration;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id iconImage;
@property (readonly, nonatomic) BOOL hydrating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *pageLayoutLocalizedTitle;
@property (readonly) BOOL pageLayoutDisplayContentsOfSingleGroup;
@property (weak) id<KHPhotoGroupCollectionDelegate> pageLayoutDelegate;
@property (readonly) NSString *pageLayoutImageName;
@property (readonly) NSString *pageLayoutSelectedImageName;

- (id)init;
- (void)_setIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)removeCollection:(id)a0;
- (void)addCollection:(id)a0;
- (id)collectionAtIndex:(unsigned long long)a0;
- (id)_findCollectionForIdentifier:(id)a0 inCollection:(id)a1;
- (void)addCollectionsFromArray:(id)a0;
- (id)collectionForIdentifier:(id)a0;
- (long long)pageLayoutNumberOfItemsInSection:(long long)a0;
- (long long)pageLayoutNumberOfSections;
- (id)pageLayoutPhotoGroupAtIndexPath:(id)a0;
- (id)photoWithURL:(id)a0;
- (void)removeAllCollections;

@end
