@interface NSMediaLibraryBrowserControllerRemoteViewServices : NSMediaLibraryBrowserController

@property (readonly) id browserProxy;

+ (unsigned long long)maskForMediaTypeEnum:(unsigned long long)a0;
+ (unsigned long long)mediaTypeEnumForMask:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)frameAutosaveName;
- (BOOL)isVisible;
- (unsigned long long)mediaLibraries;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameAutosaveName:(id)a0;
- (void)setMediaLibraries:(unsigned long long)a0;
- (void)setVisible:(BOOL)a0;
- (void)togglePanel:(id)a0;

@end
