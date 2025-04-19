@class FIContainerController;

@interface FIViewOptionsPopUpController : FI_TViewController {
    struct TNSWeakPtr<FIContainerController> { FIContainerController *fWeakObject; } _weakContainerController;
}

@property (nonatomic) int viewStyle;
@property (nonatomic) BOOL inSavePanel;
@property (weak) FIContainerController *containerController;

+ (id)imageForViewStyle:(int)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)configureView;
- (void)configureMenu;
- (void)updateViewOptionsMenuIcon;

@end
