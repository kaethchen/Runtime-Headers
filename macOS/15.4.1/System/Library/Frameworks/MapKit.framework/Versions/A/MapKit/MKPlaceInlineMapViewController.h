@class MKMapCamera, NSArray, NSString, _MKPlaceInlineMapContentView, MKAnnotatedMapSnapshotter, MKMapItem, MKPlaceInlineMapViewControllerConfiguration;
@protocol MKPlaceInlineMapViewControllerDelegate;

@interface MKPlaceInlineMapViewController : _MKUIViewController <MKModuleViewControllerProtocol> {
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    MKAnnotatedMapSnapshotter *_collectionSnapshotter;
    struct CGSize { double width; double height; } _currentSize;
}

@property (retain, nonatomic) MKPlaceInlineMapViewControllerConfiguration *configuration;
@property (retain, nonatomic) MKMapCamera *mapCamera;
@property (readonly, nonatomic) NSArray *visibleMapItems;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property (weak, nonatomic) id<MKPlaceInlineMapViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)a0 configuration:(id)a1;

- (void).cxx_destruct;
- (id)snapshot;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)_handleTapOnMap;
- (BOOL)_canShowWhileLocked;
- (void)_launchMaps;
- (struct CGSize { double x0; double x1; })_mapSize;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)_updateMap;
- (void)_updateMapIfNeeded;
- (void)_updateSnapshotImage:(id)a0;
- (void)cancelSnapshotRequestIfNeeded;
- (Class)classForRootView;
- (id)initWithMKMapItem:(id)a0 configuration:(id)a1;
- (void)updateInlineMapWithRefinedMapItems;

@end
