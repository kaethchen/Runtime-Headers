@class NSStackView, FITopBarContainerView, FIArrangeByMenuController, NSObject, FIVisualEffectView, FILocationPopUp, FI_TTargetActionFunctor, NSBox, FI_TTextField, NSString, NSSearchField, NSLayoutConstraint, FIViewOptionsPopUpController, FI_TContainerLayoutManager, FI_TButton, FIArrangeByPopUp, FI_TSegmentedControl;
@protocol FIBrowserOverlayStackViewDelegate, FILocationPopUpDelegate;

@interface FIBrowserOverlayStackViewController : FI_TViewController <TMarkTornDown> {
    NSLayoutConstraint *_topStackViewLeadingConstraint;
    NSLayoutConstraint *_topStackViewTrailingConstraint;
    FITopBarContainerView *_topBar;
    NSStackView *_toolbarButtonStackView;
    NSLayoutConstraint *_toolbarButtonStackViewToWhereStackViewGapConstraint;
    FI_TSegmentedControl *_backForward;
    FIViewOptionsPopUpController *_viewOptionsPopUpController;
    FIArrangeByPopUp *_arrangeByPopUp;
    NSStackView *_locationPopUpStackView;
    FI_TTextField *_whereLabel;
    FILocationPopUp *_locationPopUp;
    FI_TButton *_collapsePanelButton;
    NSLayoutConstraint *_searchFieldWidthConstraint;
    NSLayoutConstraint *_searchFieldToWhereStackViewGapConstraint;
    FI_TTargetActionFunctor *_searchFieldTextChangedFunctor;
    FI_TTargetActionFunctor *_searchFieldCancelButtonFunctor;
    NSBox *_horizontalLineAtTop;
    NSLayoutConstraint *_bottomStackViewLeadingConstraint;
    NSLayoutConstraint *_bottomStackViewTrailingConstraint;
    NSBox *_horizontalLineAtBottom;
    struct TNSWeakPtr<NSObject<FIBrowserOverlayStackViewDelegate>> { NSObject<FIBrowserOverlayStackViewDelegate> *fWeakObject; } _delegate;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _targetNode;
}

@property (readonly) BOOL showBackForward;
@property (readonly, retain, nonatomic) FIVisualEffectView *topVisualEffectView;
@property (readonly, retain, nonatomic) NSStackView *topStackView;
@property (readonly, retain, nonatomic) FIVisualEffectView *bottomVisualEffectView;
@property (readonly, retain, nonatomic) NSStackView *bottomStackView;
@property (nonatomic) int viewStyle;
@property (weak, nonatomic) NSObject<FIBrowserOverlayStackViewDelegate> *delegate;
@property (weak, nonatomic) id<FILocationPopUpDelegate> locationPopUpDelegate;
@property (readonly, retain, nonatomic) FIArrangeByMenuController *arrangeByMenuController;
@property (readonly, retain, nonatomic) NSSearchField *searchField;
@property (readonly, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (nonatomic) BOOL inSavePanel;
@property (nonatomic) BOOL showingAllTopBarItems;
@property (nonatomic) BOOL expanded;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingShowBackForward;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)locationAreaLeadingLayoutAnchor;
- (id)nibName;
- (BOOL)_performKeyEquivalent:(id)a0;
- (id)locationAreaTrailingLayoutAnchor;
- (id)whereLabelLeadingLayoutAnchor;
- (id)whereLabelTrailingLayoutAnchor;
- (void)aboutToTearDown;
- (void)configureView;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })targetNode;
- (void)adjustBackForwardSegments:(id)a0;
- (id)bottomAnchorForCollapsedState;
- (void)configureArrangeByMenu:(id)a0;
- (id)configureContainerLayoutManager:(id)a0;
- (void)configureViewOptionsPopUp:(id)a0;
- (void)prepareToHide;
- (void)setAlternateICloudContainerInLocationPopUp:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 name:(id)a1;
- (void)setBackButtonFunc:(const void *)a0;
- (void)setCollapseButtonFunc:(const void *)a0;
- (void)setForwardButtonFunc:(const void *)a0;
- (void)setSearchCancelButtonFunc:(const void *)a0;
- (void)setSearchTextChangedFunc:(const void *)a0;
- (void)setShouldShowCloudInLocationPopUp:(BOOL)a0;
- (double)topBarHeight;
- (void)updateExpanded;

@end
