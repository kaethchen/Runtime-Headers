@class MPDocument, NSArray, MRMarimbaLayer, MRMarimbaLayerView, NSButton;
@protocol MRMarimbaViewHUDDelegate;

@interface MRMarimbaView : NSView {
    MRMarimbaLayerView *_marimbaLayerView;
    NSArray *_orderedVideoPaths;
    NSButton *_exitButton;
    unsigned long long _hudShowCount;
    BOOL _isEnteringExitingMarimba;
}

@property (readonly) MRMarimbaLayer *marimbaLayer;
@property (retain, nonatomic) MPDocument *document;
@property (nonatomic) id<MRMarimbaViewHUDDelegate> hudDelegate;
@property (nonatomic) double marimbaContentsScale;
@property (nonatomic) double aspectRatio;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cleanAperture;
@property (readonly) BOOL isInMarimba;
@property (nonatomic) BOOL usesExitButton;

- (void)dealloc;
- (void)cleanup;
- (id)initWithCoder:(id)a0;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)close:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)hideHUD;
- (void)showHUD;
- (void)_marimbaViewCommonInit;
- (void)enterMarimbaWithDuration:(double)a0;
- (void)exitMarimbaWithDuration:(double)a0 location:(struct CGPoint { double x0; double x1; })a1 andScale:(double)a2;
- (void)marimbaWasSingleTappedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)warmupAndPlay;

@end
