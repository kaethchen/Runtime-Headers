@interface AMPDesktopUI.MovieItemLockup : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ mouseDownInside;
}

@property (nonatomic, copy) id representedObject;
@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)isSelected;
- (void)keyUp:(id)a0;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;

@end
