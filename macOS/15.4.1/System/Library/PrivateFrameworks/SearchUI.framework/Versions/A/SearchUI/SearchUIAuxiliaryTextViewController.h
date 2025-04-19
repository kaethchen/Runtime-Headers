@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController

@property (nonatomic) BOOL shouldCenter;
@property (retain) TLKAuxilliaryTextView *view;

+ (BOOL)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;
- (void)updateWithRowModel:(id)a0;

@end
