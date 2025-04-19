@class SFCard, NSTimer, NSString, NSSearchField, SearchUIBackgroundView, SearchUILoadingView, NSViewController, SearchUIBackgroundColorView;
@protocol SearchUICommandDelegate, SFFeedbackListener, SearchUINSCardTableBridgingProtocol, SearchUICardViewDelegate;

@interface SearchUICardViewController : NSViewController <SearchUIBackgroundColorProtocol, SearchUIBackgroundColorViewProtocol>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) SearchUIBackgroundColorView *colorView;
@property (retain, nonatomic) SearchUILoadingView *loadingView;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (nonatomic) BOOL hasFocusableElements;
@property (retain, nonatomic) NSViewController<SearchUINSCardTableBridgingProtocol> *tableViewController;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (nonatomic) unsigned long long level;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL shouldDrawBackgroundColor;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL disableNextCards;
@property (nonatomic) BOOL selectOnHover;
@property (nonatomic) BOOL floatingHeaders;
@property (nonatomic) BOOL singleClickExecutesCommands;
@property (weak, nonatomic) NSSearchField *searchField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_loadAndEnrichCardSectionsFromCard:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)updateBackgroundColor;
- (BOOL)restoreSelection;
- (void)saveSelection;
- (double)contentHeightForWidth:(double)a0;
- (BOOL)hasFocusableElementsInSnapshot:(id)a0;
- (void)cardViewDidAppear;
- (void)displayLoadingViewAfterDelay:(double)a0;
- (BOOL)hasCustomViewControllersForCardSections;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (BOOL)performActionForSelectedRow;
- (void)prepareLoadingView;
- (id)searchUIBackgroundColor;
- (BOOL)selectCardSection:(id)a0;
- (BOOL)selectFirstSelectableRow;
- (BOOL)selectNextRowByCategory:(BOOL)a0 forward:(BOOL)a1;
- (id)selectedCardSection;
- (void)setShouldUseInsetRoundedSections:(BOOL)a0;
- (BOOL)shouldUseInsetRoundedSections;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;
- (id)viewContainingContent;

@end
