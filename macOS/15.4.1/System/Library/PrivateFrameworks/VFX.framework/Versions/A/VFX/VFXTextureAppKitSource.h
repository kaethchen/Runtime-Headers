@class CALayer, NSWindow, NSView;

@interface VFXTextureAppKitSource : VFXTextureCoreAnimationSource {
    BOOL _windowReady;
    NSView *_nsView;
    struct CGSize { double width; double height; } _sizeCache;
    unsigned int _textureID;
    struct __CFXEngineContext { } *_engineContext;
    struct __CFXTextureSampler { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; unsigned char x8; int x9; unsigned long long x10; } *_textureSampler;
}

@property (retain, nonatomic) NSWindow *nsWindow;
@property (retain, nonatomic) CALayer *nsWindowLayer;
@property (retain, nonatomic) id source;
@property (nonatomic) BOOL isOpaque;

- (void)dealloc;
- (id)layer;
- (void)setup;
- (float)clearValue;
- (double)layerContentsScaleFactor;
- (struct CGSize { double x0; double x1; })layerSizeInPixels;
- (id)layerToFocusForRenderedLayer:(id)a0;
- (BOOL)requiresMainThreadUpdates;
- (BOOL)shouldFlip;
- (BOOL)supportsMetal;
- (void)_layerTreeDidUpdate;
- (void)setNSView:(id)a0;
- (BOOL)usesBoundsInPixels;

@end
