@class NSString, PXPlacesPhotoAssetsStore, PXPlacesMapPipeline, PXPlacesMapThumbnailLocationCurator, PHPhotoLibrary, PXPlacesMapController, NSObject, PXLibraryFilterState, PXPlacesMapView;
@protocol PXPlacesMapControllerAccess, PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;

@interface PXPlacesMapFetchResultController : NSObject <PXChangeObserver>

@property (retain, nonatomic) id<PXPlacesMapControllerAccess> mapControllerAccessor;
@property (retain, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore;
@property (retain) PXPlacesMapPipeline *providedPipeline;
@property (nonatomic) BOOL isPreloaded;
@property (retain, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore;
@property (retain, nonatomic) PXPlacesMapPipeline *albumPipeline;
@property (retain, nonatomic) PXPlacesMapPipeline *currentPipeline;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PXPlacesMapView *mapView;
@property (readonly, nonatomic) PXPlacesMapController *mapController;
@property (weak, nonatomic) PXPlacesMapThumbnailLocationCurator *thumbnailLocationCurator;
@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadFetchResult:(id)a0 withCompletion:(id /* block */)a1;
- (id)currentAssetStore;
- (void)focusOnGeotaggablesAnimated:(BOOL)a0;
- (void)focusOnMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)focusOnProvidedAssetsAnimated:(BOOL)a0;
- (void)focusOnProvidedAssetsImmediately;
- (id)initWithLibraryFilterState:(id)a0 photoLibrary:(id)a1;
- (id)initWithMapControllerAccessor:(id)a0 libraryFilterState:(id)a1 photoLibrary:(id)a2;
- (void)loadFetchResults:(id)a0 withCompletion:(id /* block */)a1;
- (void)preloadMap;
- (void)reloadContentModeWithCompletion:(id /* block */)a0;
- (void)reloadMapWithCompletion:(id /* block */)a0;
- (id)visibleGeotaggables;

@end
