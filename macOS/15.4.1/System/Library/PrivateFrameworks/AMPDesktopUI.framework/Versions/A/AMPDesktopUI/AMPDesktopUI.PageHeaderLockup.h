@class NSImage;

@interface AMPDesktopUI.PageHeaderLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title1Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ subheadField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ shuffleButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ favoriteButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ menuButton;
@property (nonatomic, readonly) NSImage *titleImage;
@property (nonatomic, readonly) BOOL canFavorite;
@property (nonatomic, readonly) NSImage *favoriteImage;
@property (nonatomic, readonly) BOOL favoriteEmphasized;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)propertyKeysForViewSpy;
- (void)reflectFavoriteAction:(id)a0;
- (void)reflectPlayAction:(id)a0;
- (void)reflectShuffleAction:(id)a0;
- (void)reflectTitleAction:(id)a0;

@end
