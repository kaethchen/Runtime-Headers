@interface AMPDesktopUI.ProductHeaderLockup : NSTableCellView <NSOutlineViewDataSource, NSTextFieldDelegate>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title1Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ title2Field;
@property (nonatomic, weak) void /* unknown type, empty encoding */ calloutField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ downloadButton;
@property (nonatomic, readonly) BOOL addButtonHidden;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) id subTitleString;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)propertyKeysForViewSpy;
- (void)reflectDownloadBtn:(id)a0;

@end
