@class SearchUIRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUITableCellView : TLKTableCellView <SearchUITableCellView>

@property (retain) SearchUIRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } customEdgeInsets;

@end
