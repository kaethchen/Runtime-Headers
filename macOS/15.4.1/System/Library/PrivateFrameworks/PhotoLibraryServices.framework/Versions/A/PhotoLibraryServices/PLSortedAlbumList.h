@class NSMutableOrderedSet, NSString, NSObject;
@protocol NSCopying, NSObject, PLAlbumContainer;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {
    struct __CFArray { } *_toBackingMap;
    struct __CFArray { } *_fromBackingMap;
    NSMutableOrderedSet *_weak_albums;
}

@property (retain, nonatomic) NSObject<PLAlbumContainer> *backingAlbumList;
@property (retain, nonatomic) NSMutableOrderedSet *_albums;
@property (copy, nonatomic) id /* block */ sortComparator;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> cachedIndexMapState;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)identifier;
- (id)managedObjectContext;
- (id)containers;
- (id)photoLibrary;
- (id)albums;
- (BOOL)needsReordering;
- (BOOL)albumHasFixedOrder:(id)a0;
- (short)albumListType;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (unsigned long long)countOfSortedAlbums;
- (void)createSortedIndexesMap;
- (Class)derivedChangeNotificationClass;
- (BOOL)hasAtLeastOneAlbum;
- (unsigned long long)indexInSortedAlbumsOfObject:(id)a0;
- (id)initWithAlbumList:(id)a0 sortComparator:(id /* block */)a1;
- (void)insertObject:(id)a0 inSortedAlbumsAtIndex:(unsigned long long)a1;
- (BOOL)mappedDataSourceChanged:(id)a0 remoteNotificationData:(id)a1;
- (id)objectInSortedAlbumsAtIndex:(unsigned long long)a0;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setNeedsReordering;
- (void)updateAlbumsOrderIfNeeded;

@end
