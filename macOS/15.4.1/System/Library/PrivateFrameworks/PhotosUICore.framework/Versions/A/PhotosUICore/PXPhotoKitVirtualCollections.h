@class PHCollectionList, PHPhotoLibrary, PHAssetCollection, PLLazyObject;

@interface PXPhotoKitVirtualCollections : NSObject {
    PLLazyObject *_importHistoryCollection;
    PLLazyObject *_recentlyViewedCollection;
    PLLazyObject *_recentlyEditedCollection;
    PLLazyObject *_recentlySharedCollection;
    PLLazyObject *_contentSyndicationCollection;
    PLLazyObject *_sharedAlbumsCollectionList;
    PLLazyObject *_mediaTypesCollectionList;
    PLLazyObject *_utilitiesCollectionList;
    PLLazyObject *_macSyncedAlbumsCollectionList;
    PLLazyObject *_rootAlbumCollectionList;
    PLLazyObject *_rootProjectCollectionList;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHAssetCollection *momentsCollection;
@property (readonly, nonatomic) PHAssetCollection *photosCollection;
@property (readonly, nonatomic) PHAssetCollection *memoriesCollection;
@property (readonly, nonatomic) PHAssetCollection *searchCollection;
@property (readonly, nonatomic) PHAssetCollection *prototypeCollection;
@property (readonly, nonatomic) PHAssetCollection *allAlbumsCollection;
@property (readonly, nonatomic) PHAssetCollection *completeMyMomentCollection;
@property (readonly, nonatomic) PHAssetCollection *peopleCollection;
@property (readonly, nonatomic) PHAssetCollection *sharedActivityCollection;
@property (readonly, nonatomic) PHAssetCollection *importHistoryCollection;
@property (readonly, nonatomic) PHAssetCollection *myAlbumsCollection;
@property (readonly, nonatomic) PHAssetCollection *sharedAlbumsCollection;
@property (readonly, nonatomic) PHAssetCollection *contentSyndicationCollection;
@property (readonly, nonatomic) PHAssetCollection *featuredCollection;
@property (readonly, nonatomic) PHAssetCollection *eventsCollection;
@property (readonly, nonatomic) PHAssetCollection *tripsCollection;
@property (readonly, nonatomic) PHAssetCollection *featuredPhotosCollection;
@property (readonly, nonatomic) PHAssetCollection *recentlyViewedCollection;
@property (readonly, nonatomic) PHAssetCollection *recentlyEditedCollection;
@property (readonly, nonatomic) PHAssetCollection *recentlySharedCollection;
@property (readonly, nonatomic) PHAssetCollection *mapCollection;
@property (readonly, nonatomic) PHAssetCollection *wallpaperSuggestionsCollection;
@property (readonly, nonatomic) PHAssetCollection *bookmarksCollection;
@property (readonly, nonatomic) PHCollectionList *sharedAlbumsCollectionList;
@property (readonly, nonatomic) PHCollectionList *sharedAlbumsAndActivityCollectionList;
@property (readonly, nonatomic) PHCollectionList *mediaTypesCollectionList;
@property (readonly, nonatomic) PHCollectionList *rootAlbumCollectionList;
@property (readonly, nonatomic) PHCollectionList *rootProjectCollectionList;
@property (readonly, nonatomic) PHCollectionList *utilitiesCollectionList;
@property (readonly, nonatomic) PHCollectionList *macSyncedAlbumsCollectionList;

+ (id)_makeTransientAssetCollectionWithRecentsKey:(id)a0 title:(id)a1 identifier:(id)a2 photoLibrary:(id)a3 configurationHandler:(id /* block */)a4;
+ (id)_virtualCollectionForType:(long long)a0 photoLibrary:(id)a1;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)featuredEventsCollectionsWithAssetFetchResult:(id)a0;
- (id)featuredMemoriesCollectionsWithAssetFetchResult:(id)a0;
- (id)featuredPeopleCollectionsWithAssetFetchResult:(id)a0;
- (id)featuredTripsCollectionsWithAssetFetchResult:(id)a0;

@end
