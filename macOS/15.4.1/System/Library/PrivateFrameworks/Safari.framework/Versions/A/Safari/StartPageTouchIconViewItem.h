@class NSTextField, NSString, NSPressGestureRecognizer, NSView, NSVisualEffectView, StartPageViewItemVisualEffect, NSImage, NSLayoutConstraint, NSImageView, ClickGestureRecognizer;
@protocol StartPageBackgroundImageIdentifierProvider, SiriSuggestionsStartPageLinkRecommendationDelegate;

@interface StartPageTouchIconViewItem : NSCollectionViewItem <NSTextFieldDelegate, DraggableStartPageViewItem> {
    NSPressGestureRecognizer *_longMousePressRecognizer;
    ClickGestureRecognizer *_immediateActionRecognizer;
    NSString *_previousText;
    id _editingTerminationEventMonitor;
    NSLayoutConstraint *_textFieldHeightConstraint;
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSVisualEffectView *_iconEffectView;
    NSImageView *_iconView;
    NSImage *_unroundedImage;
    NSImageView *_overlay;
    NSView *_boxShadow;
    BOOL _didBeginDrag;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;

@property (readonly, nonatomic) NSTextField *titleTextField;
@property (weak, nonatomic) id<SiriSuggestionsStartPageLinkRecommendationDelegate> delegate;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL usesCompactAppearance;
@property (readonly, nonatomic) double descriptionTextFieldWidth;
@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginEditing;
- (void)prepareForReuse;
- (void)rightMouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityRole;
- (void)applyLayoutAttributes:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)_endEditing;
- (void)_didRecognizeImmediateAction:(id)a0;
- (void)_registerForEditingTermination;
- (void)_removeOverlay;
- (void)_unregisterForEditingTermination;
- (void)_updateTitleHeightConstraint;
- (void)setIconImage:(id)a0 backgroundColor:(id)a1;
- (void)willBeginDragSession;
- (void)willEndDragSession;

@end
