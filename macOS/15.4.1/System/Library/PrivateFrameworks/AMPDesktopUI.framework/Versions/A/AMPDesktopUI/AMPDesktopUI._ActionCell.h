@protocol AMPEpisodeLockupModel;

@interface AMPDesktopUI._ActionCell : NSTableCellView

@property (nonatomic, weak) void /* unknown type, empty encoding */ button;
@property (nonatomic, readonly) id<AMPEpisodeLockupModel> viewModel;
@property (nonatomic) void /* unknown type, empty encoding */ isRolled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doActionClicked:(id)a0;

@end
