@class NSString, NSTableView;
@protocol MUIRichTableRowViewDelegate;

@interface MUIRichTableRowView : NSTableRowView <MUIReusableIdentifiable>

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (nonatomic) BOOL shouldDrawSeparator;
@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) id<MUIRichTableRowViewDelegate> delegate;
@property (nonatomic) unsigned long long groupingStyle;
@property (nonatomic) BOOL hideSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)drawsSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)separatorColor;
- (void)setBackgroundColor:(id)a0;
- (void)setEmphasized:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_updateGrouping;
- (id)_nextRow;
- (id)_previousRow;
- (void)_richTableRowViewCommonInit;
- (void)_updateSeparators;

@end
