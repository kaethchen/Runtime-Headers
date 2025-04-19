@class CAGradientLayer, LUI2NoAnimationLayer, NSImage, LUI2WallpaperController;

@interface LUI2BackgroundViewController : LUI2ViewController {
    LUI2NoAnimationLayer *_imageLayer;
    LUI2NoAnimationLayer *_darkenSourceOver;
    LUI2NoAnimationLayer *_lightenSourceOver;
    CAGradientLayer *_gradient;
    LUI2WallpaperController *_wallpaperController;
    long long _backgroundViewStyle;
}

@property long long backgroundViewStyle;
@property (retain) NSImage *image;
@property BOOL usesDesktopLayer;
@property id target;
@property SEL action;
@property (copy) id /* block */ wallpaperUpdatedHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)mouseUp:(id)a0;
- (void)saveImage:(id)a0;
- (void)viewDidLoad;
- (void)_initImageLayer;
- (void)_darkeningLayersSetHidden:(BOOL)a0;
- (void)_displayDidChange:(id)a0;
- (void)_fadeInLayer:(id)a0;
- (void)_setWindowOpaque:(BOOL)a0;
- (void)_updateWallpaperLayer;
- (void)_updateWindow;
- (void)fenceWithCompletion:(id /* block */)a0;

@end
