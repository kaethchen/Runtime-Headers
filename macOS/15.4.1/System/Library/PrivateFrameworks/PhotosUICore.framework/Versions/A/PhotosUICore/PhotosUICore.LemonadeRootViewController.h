@class NSResponder, PXSelectionContainer;

@interface PhotosUICore.LemonadeRootViewController : UXViewController <PXSelectionContainerProvider, PXActionProvider, NSObject> {
    void /* unknown type, empty encoding */ rootModel;
    void /* unknown type, empty encoding */ navigationContext;
    void /* unknown type, empty encoding */ photosSelection;
    void /* unknown type, empty encoding */ photosActionManager;
    void /* unknown type, empty encoding */ hostingResponder;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ actionProviderDelegate;
@property (nonatomic, readonly) NSResponder *preferredFirstResponder;
@property (nonatomic, readonly) PXSelectionContainer *selectionContainer;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)selectionAnchorViewForAction:(SEL)a0;

@end
