@class ASCLockupPresenter, NSString, ASCMetricsActivity, ASCOfferPresenter, ASCLockup, ASCLockupViewGroup, ASCAppearMetricsPresenter, ASCLockupRequest, ASCLockupProductDetails, ASCLockupContentView, ASCOfferTheme;
@protocol ASCLockupViewDelegate;

@interface ASCLockupView : NSView <ASCLockupPresenterObserver, ASCOfferPresenterObserver, ASCLockupProductDetailsObserver> {
    struct { unsigned char lockupViewDidBeginRequest : 1; unsigned char lockupViewDidFinishRequest : 1; unsigned char lockupViewDidFailRequestWithError : 1; unsigned char lockupViewAppStateDidChange : 1; unsigned char metricsActivityForAdLockupViewToPerformActionOfOfferInState : 1; unsigned char lockupViewPerformAdAttributionForState : 1; unsigned char lockupViewDidInvalidateIntrinsicContentSize : 1; unsigned char lockupViewShouldSupportDSIDLessInstalls : 1; unsigned char productDetailsPresentationContextForLockupView : 1; unsigned char lockupViewPreprocessOfferInStateCompletionBlock : 1; unsigned char badgeViewForLockupView : 1; unsigned char productDetailsUserDidInteractWithAppInteractionType : 1; } _delegateRespondsTo;
}

@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (retain, nonatomic) NSString *presentingSceneIdentifier;
@property (retain, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (readonly, nonatomic) ASCLockupContentView *contentView;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter;
@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (retain, nonatomic) NSString *presentingSceneIdentifier;
@property (retain, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (retain, nonatomic) ASCLockupProductDetails *lockupProductDetails;
@property (nonatomic) BOOL automaticallyGeneratesAppearMetrics;
@property (copy, nonatomic) ASCMetricsActivity *appearMetricsActivity;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) NSString *size;
@property (retain, nonatomic) NSString *lockupSize;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (weak, nonatomic) id<ASCLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)layout;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)layoutContentView;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFailRequestWithError:(id)a0;
- (void)offerPresenterDidObserveChangeToState:(id)a0;
- (void)offerPresenterPreprocessOffer:(id)a0 inState:(id)a1 completionBlock:(id /* block */)a2;
- (void)offerPresenterWillPerformActionOfOffer:(id)a0 inState:(id)a1 withActivity:(inout id *)a2 inContext:(inout id *)a3 withPaymentSheetView:(id)a4;
- (void)performLockupAction;
- (id)preferredProductDetailsPresentationContext;
- (void)presentProductDetailsViewController;
- (void)productDetailsUserDidInteractWithApp:(id)a0 interactionType:(id)a1;
- (void)setViewRenderSpanProvider:(id /* block */)a0;

@end
