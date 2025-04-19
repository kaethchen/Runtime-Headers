@class FIContainerController;

@interface FIArrangeByMenuController : FI_TArrangeByMenuController {
    BOOL _configuredArrangeByMenu;
    BOOL _configuredSortByMenu;
    struct TNSWeakPtr<FIContainerController> { FIContainerController *fWeakObject; } _weakContainerController;
}

@property (weak) FIContainerController *containerController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)arrangeByMenu;
- (void)configureMenu:(id)a0 forArrange:(BOOL)a1;
- (id)initWithViewSettings:(id)a0 containerController:(id)a1;
- (id)sortByMenu;

@end
