@class PLAssetContainerListChangeNotification, PLSortedAlbumList;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (BOOL)shouldReload;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (BOOL)countDidChange;
- (id)initWithSortedAlbumList:(id)a0 albumListChangeNotification:(id)a1;

@end
