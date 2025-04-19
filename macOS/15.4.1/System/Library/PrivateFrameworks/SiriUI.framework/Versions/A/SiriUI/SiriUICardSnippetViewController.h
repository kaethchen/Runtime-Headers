@class CRKCardViewController, NSString, SACardSnippet, NSMutableDictionary, CRKCardPresentation, SiriUICardSnippetView;
@protocol CRCard, CRKCardViewControllerDelegate;

@interface SiriUICardSnippetViewController : SiriUISnippetViewController <CRKCardViewControllerDelegate, CRKCardPresentationDelegate, SFResourceLoader> {
    SACardSnippet *_snippet;
    id<CRCard> _baseCard;
    id /* block */ _newlyLoadedCardCompletionHandler;
    NSMutableDictionary *_referenceableCommandsByIdentifierMap;
    NSMutableDictionary *_referenceableSnippetsByIdentifierMap;
}

@property (retain) CRKCardViewController *cardViewController;
@property (retain) CRKCardPresentation *cardPresenter;
@property (retain) SiriUICardSnippetView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)loadView;
- (double)desiredHeight;
- (BOOL)loadCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })desiredSize;
- (void)cardSectionView:(id)a0 willProcessEngagementFeedback:(id)a1;
- (void)cardViewControllerBoundsDidChange:(id)a0;
- (BOOL)performNextCardCommand:(id)a0 forCardViewController:(id)a1;
- (BOOL)performReferentialCommand:(id)a0 forCardViewController:(id)a1;
- (void)userDidEngageCardSection:(id)a0 withEngagementFeedback:(id)a1;
- (void)setSnippet:(id)a0;
- (double)desiredHeightForWidth:(double)a0;
- (void)_addCardViewControllerAsChildViewController:(id)a0;
- (void)_addNextCardTo:(id)a0 fullCard:(id)a1;
- (void)_applyUserInfoDictionary:(id)a0 toCommand:(id)a1;
- (id)_cardForData:(id)a0;
- (void)_configureCardViewController:(id)a0;
- (BOOL)_loadCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (long long)_pinAnimationType;
- (void)_removeBottomKeylineFromCard:(id)a0;
- (void)_removeCardViewControllerFromParentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })desiredSizeForWidth:(double)a0;
- (BOOL)shouldSurpressBackground;
- (void)siriDidStartSpeakingWithIdentifier:(id)a0;
- (void)siriDidStopSpeakingWithIdentifier:(id)a0 speechQueueIsEmpty:(BOOL)a1;

@end
