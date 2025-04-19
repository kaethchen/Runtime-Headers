@class NSImage, NSString, NSToolbarLabelStack, NSToolbarSnapshotWindow, NSLayoutConstraint, NSFont, NSMutableArray;

@interface NSToolbarCollectionViewItem : NSCollectionViewItem {
    NSToolbarLabelStack *_labelStack;
    NSMutableArray *_labelViews;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_imageCenterConstraint;
    NSMutableArray *_hiddenItemDecorationViews;
    NSToolbarSnapshotWindow *_snapshotWindow;
    NSImage *_activeImage;
    NSImage *_inactiveImage;
    NSString *_accessibilityLabel;
    BOOL _snapshotInProgress;
    BOOL _deemphasized;
}

@property (class, readonly) NSFont *labelFont;

@property (retain) NSToolbarSnapshotWindow *snapshotWindow;
@property BOOL deemphasized;

+ (id)labelForPaletteLabelString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_hiddenItemDecorationViewsToAlignedContentViews;
- (void)_invalidateImageCache;
- (BOOL)_isActiveState;
- (void)_updateVisualState;
- (BOOL)_viewControllerSupports10_10Features;
- (void)_windowKeyChanged:(id)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)draggingImageComponents;
- (void)loadView;
- (id)snapShotItemWithAvailableSize:(struct CGSize { double x0; double x1; })a0 isActive:(BOOL)a1;
- (void)updateViewConstraints;

@end
