@class NSString, NSMutableSet;

@interface GLUTWindow : NSWindow <NSWindowDelegate> {
    GLUTWindow *_nextFullscreenWindow;
    NSString *_imagePath;
    NSMutableSet *_viewStorage;
    int _enabledMouseMovedEvents;
    BOOL _isFullscreen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)windowByMorphingWindow:(id)a0 operation:(int)a1 arguments:(id)a2;

- (void)dealloc;
- (void)finalize;
- (void)windowWillMove:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)copy:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)print:(id)a0;
- (void)runPageLayout:(id)a0;
- (void)save:(id)a0;
- (void)sendEvent:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (BOOL)validateMenuItem:(id)a0;
- (void)windowDidMiniaturize:(id)a0;
- (void)windowDidMove:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillMiniaturize:(id)a0;
- (BOOL)writeSelectionToPasteboard:(id)a0 types:(id)a1;
- (void)zoom:(id)a0;
- (BOOL)isFullscreen;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(id)a2;
- (id)_dataWithTIFFOfContentView;
- (id)_dataWithRTFDOfContentView;
- (void)saveAs:(id)a0;
- (id)_initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned int)a1 contentView:(id)a2;
- (id)_initWithWindow:(id)a0 operation:(int)a1 arguments:(id)a2;
- (id)_windowWithTIFFInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contentsAsDataOfType:(id)a0;
- (void)disableMouseMovedEvents;
- (void)enableMouseMovedEvents;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(id)a1 windowID:(int)a2 gameMode:(BOOL)a3 treatAsSingle:(BOOL)a4;
- (BOOL)isAffectedByFullscreenWindow;
- (void)pageLayoutDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(id)a2;
- (void)savePanelDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(id)a2;

@end
