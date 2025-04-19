@class NUIContainerBoxView, SearchUIRowModel, NSFont, NSString, SearchUIButtonItem, SearchUIButtonItemView;
@protocol SearchUIButtonItemViewControllerDelegate, SearchUIFeedbackDelegate;

@interface SearchUIButtonItemViewController : NSObject <SearchUIButtonItemDelegate, SearchUIButtonItemViewDelegate>

@property (retain, nonatomic) SearchUIButtonItemView *buttonItemView;
@property (retain, nonatomic) NUIContainerBoxView *view;
@property (retain, nonatomic) SearchUIButtonItem *buttonItem;
@property (nonatomic) unsigned long long buttonItemViewStyle;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) SearchUIRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIButtonItemViewControllerDelegate> buttonDelegate;
@property (retain, nonatomic) NSFont *buttonFont;
@property (nonatomic) BOOL isCompact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL supportsContextMenuConfiguration;

+ (id)buttonItemViewControllerForButtonItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)customPreviewMenu;
- (id)previewCommandHandler;
- (void)setbuttonItemViewStyle:(unsigned long long)a0;
- (void)stateDidChangeForButtonItem:(id)a0;
- (void)updateImageForStatusUpdate:(BOOL)a0;
- (void)updateWithButtonItem:(id)a0 buttonItemViewType:(unsigned long long)a1;
- (void)updateWithButtonItem:(id)a0 buttonItemViewType:(unsigned long long)a1 isStatusUpdate:(BOOL)a2;

@end
