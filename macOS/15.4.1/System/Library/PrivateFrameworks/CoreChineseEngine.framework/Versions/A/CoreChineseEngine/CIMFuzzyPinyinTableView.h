@class NSLayoutConstraint;

@interface CIMFuzzyPinyinTableView : NSTableView

@property (nonatomic) BOOL tableWidthAdjusted;
@property (retain, nonatomic) NSLayoutConstraint *tableWidthConstraint;

- (void).cxx_destruct;
- (void)adjustColumnWidth;

@end
