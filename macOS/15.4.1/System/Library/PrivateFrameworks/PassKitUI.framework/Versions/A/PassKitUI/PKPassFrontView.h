@class NSView, NSString, NSArray, PKImageView, PKPassTextField, NSMutableArray, NSImage, NSButton;

@interface PKPassFrontView : PKPassView <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    NSView *_primaryFieldsView;
    NSMutableArray *_primaryFieldViews;
    NSView *_secondaryFieldsView;
    NSMutableArray *_secondaryFieldViews;
    NSArray *_auxFieldsView;
    NSArray *_auxFieldViews;
    NSArray *_rebucketedAuxFields;
    NSView *_headerFieldsView;
    NSMutableArray *_headerFieldViews;
    PKPassTextField *_logoTextField;
    PKImageView *_logoImageView;
    NSImage *_barcodeImage;
    PKImageView *_barcodeImageView;
    PKImageView *_footerImageView;
    NSImage *_cachedFrontImage;
    BOOL _isStripImageDrawn;
}

@property (readonly) NSButton *infoButton;
@property (readonly) NSButton *shareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 opaqueFrameForSourceWindow:(id)a1;
- (void)setPass:(id)a0;
- (void)shareClicked:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerFieldRect;
- (id)_addTextFieldWithValue:(id)a0;
- (void)_addTextFieldsWithField:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_barcodeBoxRectWithBarcodeImage:(id)a0 infoString:(id)a1 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)_drawBarcodeShowingText:(BOOL)a0;
- (void)_drawBoardingPassIcon;
- (void)_drawInlineBackground;
- (void)_drawThumbnail;
- (id)_itemsToShare;
- (void)_layoutAuxFields;
- (void)_layoutBarcodeImageView;
- (void)_layoutFields:(id)a0 type:(long long)a1 usingFieldViews:(id)a2 inContentView:(id)a3 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)_layoutFooterImageView;
- (void)_layoutHeaderFields;
- (void)_layoutLogoImageView;
- (void)_layoutLogoTextField;
- (void)_layoutPrimaryFields;
- (void)_layoutSecondaryFields;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_logoRectForImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_logoTextRectWithString:(id)a0 attributes:(id)a1 logoImage:(id)a2;
- (void)_observeField:(id)a0;
- (id)_rebucketAuxiliaryFields:(id)a0;
- (void)_unobserveField:(id)a0;
- (void)_updateBarcodeImage;
- (void)_updateCardFaceButtonImages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxFieldsBounds:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barCodeRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerRect;
- (id)initWithPass:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlineBackgroundRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryFieldsBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondaryFieldsBounds;

@end
