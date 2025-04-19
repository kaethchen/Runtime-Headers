@interface PreviewsInjection.MacOSPreviewHostingWindow : NSWindow {
    void /* unknown type, empty encoding */ forceAppearsKey;
    void /* unknown type, empty encoding */ forceAppearsMain;
}

@property (nonatomic, readonly) BOOL canBecomeKeyWindow;
@property (nonatomic, readonly) BOOL canBecomeMainWindow;
@property (nonatomic, readonly) BOOL keyWindow;
@property (nonatomic, readonly) BOOL mainWindow;

- (BOOL)hasKeyAppearance;
- (BOOL)hasMainAppearance;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)isKeyWindow;
- (BOOL)isMainWindow;

@end
