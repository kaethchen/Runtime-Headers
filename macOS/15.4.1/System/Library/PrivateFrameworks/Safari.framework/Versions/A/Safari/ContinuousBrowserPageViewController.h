@class ContinuousPageView, NSString, TabContentViewController;

@interface ContinuousBrowserPageViewController : NSViewController <ContinuousPageViewDelegate>

@property (retain, nonatomic) id currentItem;
@property (readonly, weak, nonatomic) TabContentViewController *tabContentViewController;
@property (readonly, retain, nonatomic) ContinuousPageView *continuousPageView;
@property (nonatomic) double topContentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;
- (void)loadItem:(id)a0;
- (void)continuousPageView:(id)a0 pageViewDidParticipateInTransition:(id)a1 pageItem:(id)a2;
- (BOOL)continuousPageView:(id)a0 canScrollDownPageView:(id)a1 pageItem:(id)a2;
- (BOOL)continuousPageView:(id)a0 canScrollUpPageView:(id)a1 pageItem:(id)a2;
- (void)continuousPageView:(id)a0 didTransitionToPageView:(id)a1 pageItem:(id)a2 fromPageItem:(id)a3 previousPageItem:(id)a4 nextPageItem:(id)a5;
- (id)continuousPageView:(id)a0 itemAfter:(id)a1;
- (id)continuousPageView:(id)a0 itemBefore:(id)a1;
- (id)continuousPageView:(id)a0 pageViewForItem:(id)a1;
- (BOOL)continuousPageView:(id)a0 pageViewHasFooterBanner:(id)a1 pageItem:(id)a2;
- (void)continuousPageView:(id)a0 pageViewWillParticipateInTransition:(id)a1 pageItem:(id)a2 role:(int)a3;
- (void)continuousPageView:(id)a0 transitionToPageViewWasCanceled:(id)a1 pageItem:(id)a2;
- (void)continuousPageView:(id)a0 willTransitionToPageView:(id)a1 pageItem:(id)a2;
- (void)exitContinuousMode;
- (id)initWithTabContentViewController:(id)a0;
- (id)pageWithHeaderViewControllerForItem:(id)a0;
- (void)resetAllPageWithHeaderViewControllers;
- (double)topContentInsetForContinuousPageView:(id)a0;

@end
