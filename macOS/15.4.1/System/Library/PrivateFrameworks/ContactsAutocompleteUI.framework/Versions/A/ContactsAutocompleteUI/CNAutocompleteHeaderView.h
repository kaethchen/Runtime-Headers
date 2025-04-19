@class NSTextField, NSArray, CNAutocompleteSeparatorView, NSString;

@interface CNAutocompleteHeaderView : NSTableCellView

@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSArray *headerConstraints;
@property (readonly, nonatomic) CNAutocompleteSeparatorView *dividerLine;
@property (nonatomic) BOOL showDividerLine;
@property (nonatomic) unsigned long long dividerType;
@property (nonatomic) NSString *labelString;

+ (id)label;

- (id)init;
- (void).cxx_destruct;
- (id)constraintsForInvisibleLabel;
- (id)constraintsForInvisibleLabelAndInvisibleDividerLine;
- (id)constraintsForInvisibleLabelAndVisibleDividerLine;
- (id)constraintsForVisibleLabel;
- (id)constraintsForVisibleLabelAndInvisibleDividerLine;
- (id)constraintsForVisibleLabelAndVisibleDividerLine;
- (id)dividerMetrics;
- (id)horizontalDividerConstraints;
- (id)horizontalLabelConstraints;
- (id)horizontalLabelMetrics;
- (id)initWithLabelString:(id)a0 showsDividerLine:(BOOL)a1;
- (void)showDividerLine:(BOOL)a0;
- (void)updateHeaderConstraints;
- (id)viewsByName;

@end
