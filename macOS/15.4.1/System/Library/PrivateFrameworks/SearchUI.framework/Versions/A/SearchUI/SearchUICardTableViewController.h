@class NSSearchField, SFColor, NSString, SFCard, SearchUITableModel;
@protocol SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener;

@interface SearchUICardTableViewController : SearchUITableViewController <SearchUINSCardTableBridgingProtocol>

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) BOOL disableNextCards;
@property (nonatomic) BOOL selectOnHover;
@property (nonatomic) BOOL floatingHeaders;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL singleClickExecutesCommands;
@property (retain, nonatomic) SFColor *searchUIBackgroundColor;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (weak, nonatomic) NSSearchField *searchField;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> cardViewDelegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadViews;
- (double)contentSizeForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })preferredScrollViewContentSize;

@end
