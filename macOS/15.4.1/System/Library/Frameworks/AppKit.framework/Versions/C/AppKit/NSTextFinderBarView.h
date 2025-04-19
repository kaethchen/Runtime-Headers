@class NSTextField, NSMenu, NSMenuItem, NSSearchField, NSBannerView, NSStackView, NSLayoutConstraint, NSButton, NSSegmentedControl;
@protocol NSFindPatternField;

@interface NSTextFinderBarView : NSView {
    id _finder;
    id _container;
    NSBannerView *_bannerView;
    NSSearchField<NSFindPatternField> *_searchField;
    NSTextField<NSFindPatternField> *_replaceField;
    NSButton *_doneButton;
    NSButton *_replaceCheckbox;
    NSSegmentedControl *_forwardBackButtons;
    NSSegmentedControl *_replaceAllButtons;
    NSMenu *_replaceAllMenu;
    NSMenuItem *_ignoreCaseItem;
    NSMenuItem *_wrapAroundItem;
    NSMenuItem *_includeAttachmentsItem;
    NSMenuItem *_containsItem;
    NSMenuItem *_startsWithItem;
    NSMenuItem *_fullWordItem;
    NSMenuItem *_patternItem;
    NSMenuItem *_patternItemSeparator;
    NSLayoutConstraint *_collapseConstraint;
    NSStackView *_findRowStackView;
    NSStackView *_replaceRowStackView;
    BOOL _replaceMode;
    BOOL _useRegularControls;
    BOOL _drawsBackground;
}

- (void)dealloc;
- (id)_container;
- (double)_requiredHeight;
- (void)_updateSubviews;
- (void)_setTextFinder:(id)a0;
- (id)_actionResponderFromView:(id)a0;
- (id)_contentView;
- (BOOL)_contiguousWithTitlebar;
- (unsigned long long)_dividerPosition;
- (void)_doneButton:(id)a0;
- (void)_finishedMakingConnections;
- (void)_insertFindPattern:(id)a0;
- (void)_layoutBarSubviews;
- (id)_nextKeyView;
- (id)_replaceField;
- (void)_resizeIfNecessary;
- (id)_searchField;
- (unsigned long long)_searchOptions;
- (void)_setEnabledForward:(BOOL)a0 back:(BOOL)a1;
- (void)_setReplaceMode:(BOOL)a0;
- (void)_setSearchOptions:(unsigned long long)a0;
- (void)_setSubstringMatchType:(long long)a0;
- (long long)_substringMatchType;
- (id)_textFinder;
- (void)_toggleFindReplace:(id)a0;
- (void)_updateNextKeyViews;
- (void)_updateReplaceUIVisibility;
- (void)performTextFinderAction:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;

@end
