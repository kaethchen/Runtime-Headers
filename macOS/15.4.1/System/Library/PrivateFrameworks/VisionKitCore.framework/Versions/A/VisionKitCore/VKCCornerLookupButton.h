@class VKCVisualSearchResult, NSString, NSView, CALayer, NSButton, VKCVisualSearchResultItem;
@protocol VKCCornerLookupButtonDelegate;

@interface VKCCornerLookupButton : VKCTappableView <RVPresenterHighlightDelegate, NSAccessibilityButton>

@property (retain, nonatomic) VKCVisualSearchResultItem *resultItem;
@property (retain, nonatomic) VKCVisualSearchResult *result;
@property (retain, nonatomic) NSButton *button;
@property (weak, nonatomic) id<VKCCornerLookupButtonDelegate> delegate;
@property (nonatomic) BOOL isShowingVisualResultsPane;
@property (retain, nonatomic) NSString *currentRVItemID;
@property (nonatomic) BOOL observingInteractionDidFinish;
@property (nonatomic) BOOL didProcessResult;
@property (nonatomic) BOOL shouldShowResultWhenVisible;
@property (nonatomic) double buttonWidth;
@property (nonatomic) double buttonHeight;
@property (retain, nonatomic) id selectedLayerContents;
@property (retain, nonatomic) id nonSelectedLayerContents;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) NSView *imageLayerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)_queryString;
- (void)revealContext:(id)a0 drawRectsForItem:(id)a1;
- (void)_updateImage;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (BOOL)isAccessibilityElement;
- (void)mouseMoved:(id)a0;
- (id)revealContext:(id)a0 rectsForItem:(id)a1;
- (BOOL)revealContext:(id)a0 shouldUseDefaultHighlightForItem:(id)a1;
- (void)revealContext:(id)a0 startHighlightingItem:(id)a1;
- (void)revealContext:(id)a0 stopHighlightingItem:(id)a1;
- (void)revealContext:(id)a0 completeHighlightingItem:(id)a1;
- (void)revealContext:(id)a0 highlightItem:(id)a1 withProgress:(double)a2;
- (void)revealContext:(id)a0 highlightRangeChangedForItem:(id)a1;
- (void)_setupButton;
- (void)_setupGestures;
- (void)didTap;
- (id)_backgroundColorBehindText;
- (id)_defaultSymbolName;
- (id)_symbolNameForItem;
- (double)cornerButtonSize;
- (void)didDismissVisualResultsPane;
- (id)imageForButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resultItem:(id)a1;
- (id)queryForProcessingResult;
- (void)showLookupUIPaneForResultItem;
- (void)showVisualSearchResultView;
- (void)updateIndicatorDotForState;

@end
