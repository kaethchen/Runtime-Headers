@class NSArray, UXView, NSTextField;

@interface KHInspectorTileViewController : UXViewController

@property (retain, nonatomic) NSTextField *titleView;
@property double titleHeight;
@property (retain, nonatomic) NSArray *titleConstraints;
@property (retain, nonatomic) UXView *horizontalSeparator;
@property (retain, nonatomic) NSArray *customConstraints;
@property (retain, nonatomic) UXView *contentView;
@property (nonatomic) double contentWidth;
@property (nonatomic) BOOL drawsSeparator;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)setupConstraints;

@end
