@class NSBox, NSView, NSLayoutConstraint, NSSegmentedControl;
@protocol CSKTabViewControllerDataSource, CSKTabViewControllerDelegate;

@interface CSKTabViewController : NSViewController

@property (weak, nonatomic) NSView *contentView;
@property (weak, nonatomic) NSSegmentedControl *segmentedControl;
@property (weak, nonatomic) NSBox *horizontalSeparator;
@property (weak, nonatomic) NSLayoutConstraint *separatorAndContentVerticalConstraint;
@property (nonatomic) long long currentSegment;
@property (weak, nonatomic) id<CSKTabViewControllerDelegate> delegate;
@property (weak, nonatomic) id<CSKTabViewControllerDataSource> datasource;
@property (nonatomic) BOOL showsSeparator;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)_showSeparator:(BOOL)a0;
- (void)_updateContentViewWithCurrentSegment;
- (void)segmentedControlDidClick:(id)a0;

@end
