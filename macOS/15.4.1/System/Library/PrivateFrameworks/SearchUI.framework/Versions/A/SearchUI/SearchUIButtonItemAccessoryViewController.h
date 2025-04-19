@class SearchUIButtonItemStackView;

@interface SearchUIButtonItemAccessoryViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) SearchUIButtonItemStackView *view;

+ (BOOL)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (id)buttonTypes;
- (void)updateWithRowModel:(id)a0;

@end
