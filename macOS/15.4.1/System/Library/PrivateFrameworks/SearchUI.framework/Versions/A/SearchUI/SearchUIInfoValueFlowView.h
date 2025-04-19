@class SearchUIRowModel, NSString, SFInfoTuple, NSMutableArray;
@protocol SearchUIInfoSizingDelegate, SearchUIFeedbackDelegate;

@interface SearchUIInfoValueFlowView : NUIContainerFlowView <SearchUIButtonItemViewControllerDelegate>

@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) NSMutableArray *infoValueViewControllers;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIInfoSizingDelegate> sizingDelegate;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) SFInfoTuple *tuple;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reloadViews;
- (void)buttonItemPressed:(id)a0;
- (void)configureInfoValueButtonController:(id)a0 withButtonItem:(id)a1;

@end
