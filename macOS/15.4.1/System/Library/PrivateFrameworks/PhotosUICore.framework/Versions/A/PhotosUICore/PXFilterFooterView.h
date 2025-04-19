@class NSColor, PXSharedLibraryStatusProvider, NSTextField, PXLibraryFilterState, PXContentFilterState;
@protocol PXFilterFooterViewDelegate;

@interface PXFilterFooterView : UXView {
    NSTextField *_captionLabel;
}

@property (weak, nonatomic) id<PXFilterFooterViewDelegate> delegate;
@property (retain, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (retain, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (retain, nonatomic) PXContentFilterState *contentFilterState;
@property (retain, nonatomic) NSColor *captionColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFitsCaption:(struct CGSize { double x0; double x1; })a0;

@end
