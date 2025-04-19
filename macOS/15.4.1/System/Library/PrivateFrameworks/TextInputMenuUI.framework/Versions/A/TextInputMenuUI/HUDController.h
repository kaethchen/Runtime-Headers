@class InputView, NSPanel, NSArray, NSScrollView, NSCollectionViewItem, NSVisualEffectView, NSArrayController, NSMutableArray, NSCollectionView;
@protocol HUDDataSource;

@interface HUDController : NSObject <TSMMessageProtocol> {
    NSArray *inputs;
    NSCollectionViewItem *ibCollectionViewItem;
    InputView *templateView;
    InputView *largeTemplateView;
    InputView *mediumTemplateView;
    InputView *smallMediumTemplateView;
    InputView *smallTemplateView;
    InputView *extraSmallTemplateView;
    InputView *tinyTemplateView;
    NSScrollView *containingScrollView;
    NSVisualEffectView *visualEffectView;
    id<HUDDataSource> dataSource;
    NSArrayController *inputsController;
    NSMutableArray *recentInputs;
}

@property (retain) NSArray *inputs;
@property long long inputsCount;
@property (readonly) NSPanel *inputsWindow;
@property (retain) NSArray *sortedInputs;
@property (readonly) NSCollectionView *ibCollectionView;
@property double cachedFrameHeight;
@property double cachedPointSize;
@property double cachedTextFieldFrameHeight;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setSelectionIndex:(long long)a0;
- (void)selectionChanged:(id)a0;
- (id)recentInputs;
- (void)setRecentInputs:(id)a0;
- (void)commitSelection;
- (id)_findView:(long long)a0 contentFrameHeight:(double)a1;
- (id)arrangeInputSourcesInHistoricalUsageOrder:(id)a0;
- (void)changeCurrentSelection;
- (void)commandSpace;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (long long)currentKeyboardInputIndex;
- (void)determineMaxWidth:(id)a0 forInputSources:(id)a1;
- (void)fillContent:(id)a0;
- (void)hideInputsWindow;
- (long long)indexForInputNamed:(id)a0;
- (id)inputSourceNamed:(id)a0;
- (BOOL)inputsWindowVisible;
- (void)moveSelection:(long long)a0;
- (void)prepareInputsSelectionWindow;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (void)showInputsWindow;

@end
