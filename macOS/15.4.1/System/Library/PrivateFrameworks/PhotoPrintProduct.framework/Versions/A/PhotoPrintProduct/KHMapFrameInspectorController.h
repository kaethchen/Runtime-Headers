@class KHMapTypePickerController, NSSlider, KHMapPlacesPickerController, KHInspectorTileViewController;

@interface KHMapFrameInspectorController : KHFrameInspectorController

@property (retain) KHMapTypePickerController *mapTypePicker;
@property (retain) KHMapPlacesPickerController *mapPlacesPicker;
@property (retain) NSSlider *mapZoomSlider;
@property (retain, nonatomic) KHInspectorTileViewController *mapTypeTileController;
@property (retain, nonatomic) KHInspectorTileViewController *mapPlacesTileController;
@property (retain, nonatomic) KHInspectorTileViewController *mapZoomTileController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)setFrames:(id)a0;
- (void)mapZoomUpdated:(id)a0;
- (id)viewForPresentationMode:(int)a0;

@end
