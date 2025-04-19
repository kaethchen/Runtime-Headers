@class CALayer;

@interface VFXAppKitSource : VFXImageSource {
    id _nsView;
    CALayer *_nsWindowLayer;
    BOOL _isOpaque;
    BOOL _windowPreparing;
}

@property (retain, nonatomic) id nsWindow;

- (void)dealloc;
- (id)init;
- (BOOL)isOpaque;
- (BOOL)supportsMetal;
- (id)textureSource;
- (id)prepareWindowIfNeeded;
- (void)setNSView:(id)a0;

@end
