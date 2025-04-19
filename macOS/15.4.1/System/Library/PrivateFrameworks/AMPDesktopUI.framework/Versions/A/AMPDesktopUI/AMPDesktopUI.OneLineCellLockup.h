@protocol OneLineCellLockupModel;

@interface AMPDesktopUI.OneLineCellLockup : NSTableCellView {
    void /* unknown type, empty encoding */ primaryLabel;
}

@property (class, nonatomic, readonly) double defaultHeight;

@property (nonatomic, retain) id<OneLineCellLockupModel> viewModel;

+ (id)lockup;
+ (id)keyPathsForValuesAffectingViewModel;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (id)propertyKeysForViewSpy;

@end
