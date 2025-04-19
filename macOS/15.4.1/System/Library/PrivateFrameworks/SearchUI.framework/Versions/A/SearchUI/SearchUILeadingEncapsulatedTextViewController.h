@class SearchUILabel;

@interface SearchUILeadingEncapsulatedTextViewController : SearchUILeadingViewController

@property (retain) SearchUILabel *view;

+ (BOOL)supportsRowModel:(id)a0;

- (id)setupView;
- (BOOL)shouldCenterAlignToTitle;
- (void)updateWithRowModel:(id)a0;

@end
