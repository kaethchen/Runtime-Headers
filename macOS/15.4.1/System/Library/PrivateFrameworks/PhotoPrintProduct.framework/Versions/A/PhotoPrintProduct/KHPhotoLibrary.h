@class NSArray, NSMutableDictionary, NSMutableArray, NSCache;

@interface KHPhotoLibrary : NSObject <KHPhotoLibraryProtocol> {
    NSMutableDictionary *_photoGroupCache;
    NSMutableArray *_photoGroupCollections;
    NSMutableArray *_sourcesArray;
    NSMutableDictionary *_mediaSources;
    unsigned long long _numberOfPhotos;
}

@property (readonly, nonatomic) NSCache *photoCache;
@property (readonly, nonatomic) NSArray *sortedSources;
@property (readonly, nonatomic) NSArray *allPhotos;

+ (id)defaultLibrary;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dumpCache;
- (unsigned long long)numberOfPhotos;
- (unsigned long long)numberOfSources;
- (id)_handlerForURL:(id)a0;
- (void)_dumpCache:(id)a0;
- (unsigned long long)_generateNumberOfPhotos;
- (void)_updateGroups;
- (void)beginHydrationForSource:(id)a0;
- (void)cachePhoto:(id)a0;
- (void)dumpPhotoCache;
- (unsigned long long)pageLayoutAuthorizationStatus;
- (long long)pageLayoutNumberOfPhotoGroupCollections;
- (id)pageLayoutPhotoGroupCollectionAtIndex:(long long)a0;
- (id)pageLayoutPhotoGroupWithUID:(id)a0;
- (id)pageLayoutPhotoWithPhotoID:(id)a0;
- (id)pageLayoutPhotosWithPhotoIDs:(id)a0;
- (void)pageLayoutRequestAccessWithCompletion:(id /* block */)a0;
- (id)photoWithURL:(id)a0;
- (void)trackSource:(id)a0;
- (void)untrackSource:(id)a0;

@end
