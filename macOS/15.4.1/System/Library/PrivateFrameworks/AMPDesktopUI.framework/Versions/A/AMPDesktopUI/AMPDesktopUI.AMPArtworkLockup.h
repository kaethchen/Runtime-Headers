@class NSImage;

@interface AMPDesktopUI.AMPArtworkLockup : AMPBindableView {
    void /* unknown type, empty encoding */ onEditBlock;
    void /* unknown type, empty encoding */ onAssignBlock;
    void /* unknown type, empty encoding */ watchingForChanges;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ pullingArtwork;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ radiosityShadowLayer;
    void /* unknown type, empty encoding */ baseShadow;
    void /* unknown type, empty encoding */ radiosityFadeInDuration;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, copy) id /* block */ onEditBlock;
@property (nonatomic, retain) void /* unknown type, empty encoding */ emptyImage;
@property (nonatomic, copy) id /* block */ onAssignBlock;
@property (nonatomic, readonly) NSImage *currentImage;
@property (nonatomic) void /* unknown type, empty encoding */ padTo16By9;
@property (nonatomic) long long ibStyle;
@property (nonatomic) void /* unknown type, empty encoding */ radiosityVerticalOffset;
@property (nonatomic) void /* unknown type, empty encoding */ radiosityExpansion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)appKitEditedImage:(id)a0;
- (id)propertyKeysForViewSpy;
- (id)stringValueForViewSpyPropertyKey:(id)a0;

@end
