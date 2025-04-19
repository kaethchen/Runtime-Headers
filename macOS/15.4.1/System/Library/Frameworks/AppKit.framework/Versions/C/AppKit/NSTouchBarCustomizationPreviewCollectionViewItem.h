@class NSPressGestureRecognizer, NSArray, NSString, NSTouchBarCustomizationPreviewItemContainerView, NSPanGestureRecognizer;

@interface NSTouchBarCustomizationPreviewCollectionViewItem : NSCollectionViewItem <NSGestureRecognizerDelegate> {
    NSTouchBarCustomizationPreviewItemContainerView *_itemView;
    NSPressGestureRecognizer *_pressRecognizer;
    NSPanGestureRecognizer *_panRecognizer;
    struct CGSize { double width; double height; } _reducedMetricsThreshold;
    BOOL _isInteractable;
    BOOL _isSpace;
    BOOL _leadingJiggle;
    BOOL _trailingJiggle;
}

@property (copy) NSArray *accessibilityActionEntries;
@property (readonly) BOOL _shouldJiggle;
@property (readonly) long long jiggleIndex;
@property (readonly) NSTouchBarCustomizationPreviewItemContainerView *itemView;
@property (copy) id /* block */ pressHandler;
@property (copy) id /* block */ panHandler;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setRepresentedObject:(id)a0;
- (void)_handlePan:(id)a0;
- (void)_handlePress:(id)a0;
- (BOOL)_shouldLeadingJiggle;
- (BOOL)_shouldTrailingJiggle;
- (void)_updateJiggle;
- (BOOL)_viewControllerSupports10_10Features;
- (id)accessibilityActionNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelp;
- (id)accessibilityHiddenAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityIsHiddenAttributeSettable;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (void)applyLayoutAttributes:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityHidden;
- (void)loadView;
- (id)preferredViewAppearanceShowingAppState:(BOOL)a0;

@end
