@class ASCSignpostSpan, ASCOfferPresenter, ASCPresenterContext, ASCLockupViewGroup, ASCAppearMetricsPresenter, ASCCustomLockupContentProvider, ASCLockupRequest, AMSMutablePromise, ASCLockup;
@protocol ASCLockupPresenterView, ASCLockupPresenterObserver;

@interface ASCLockupPresenter : NSObject

@property (readonly, weak, nonatomic) id<ASCLockupPresenterView> view;
@property (readonly, nonatomic) ASCPresenterContext *context;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (readonly, nonatomic) ASCCustomLockupContentProvider *customContentProvider;
@property (retain, nonatomic) AMSMutablePromise *pendingRequestedLockup;
@property (retain, nonatomic) ASCSignpostSpan *pendingViewRender;
@property (readonly, nonatomic) BOOL prefersRightToLeftViewLayout;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (weak, nonatomic) id<ASCLockupPresenterObserver> observer;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (copy, nonatomic) id /* block */ viewRenderSpanProvider;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)beginViewRender;
- (void)clearContent;
- (void)daemonDidRebootstrap:(id)a0;
- (void)endViewRender;
- (void)iconArtwork:(id)a0 didFailFetchWithError:(id)a1;
- (void)iconArtwork:(id)a0 didFetchImage:(id)a1;
- (id)initWithView:(id)a0 customContentProvider:(id)a1 offerPresenter:(id)a2 metricsPresenter:(id)a3;
- (id)initWithView:(id)a0 customContentProvider:(id)a1 offerPresenter:(id)a2 metricsPresenter:(id)a3 context:(id)a4;
- (id)initWithView:(id)a0 metricsPresenter:(id)a1;
- (id)initWithView:(id)a0 offerPresenter:(id)a1 metricsPresenter:(id)a2;
- (void)performFollowUpWork:(id /* block */)a0;
- (void)performIconFetch;
- (void)performLockupFetch;
- (void)reloadDefaultContent;
- (void)request:(id)a0 didCompleteWithLockup:(id)a1;
- (void)requestWillFetchLockup:(id)a0;
- (void)retryGroup:(id)a0;
- (void)retryRequestIfNeeded:(id /* block */)a0;
- (void)showPlaceholderContent;

@end
