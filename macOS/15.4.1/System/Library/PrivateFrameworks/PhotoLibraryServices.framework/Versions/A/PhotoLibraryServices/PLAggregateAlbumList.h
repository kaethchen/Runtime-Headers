@class NSString, NSMutableOrderedSet;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
}

@property (nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumListWithFilter:(int)a0 inPhotoLibrary:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)identifier;
- (id)managedObjectContext;
- (id)containers;
- (id)photoLibrary;
- (id)albums;
- (BOOL)needsReordering;
- (void)_invalidateAllAlbums;
- (BOOL)albumHasFixedOrder:(id)a0;
- (short)albumListType;
- (void)assetContainerListDidChange:(id)a0;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (BOOL)hasAtLeastOneAlbum;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void)setNeedsReordering;
- (void)updateAlbumsOrderIfNeeded;

@end
