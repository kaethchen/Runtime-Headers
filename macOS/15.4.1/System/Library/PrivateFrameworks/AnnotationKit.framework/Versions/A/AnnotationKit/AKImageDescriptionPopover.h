@class NSString, AKController, AXSSImageDescriptionViewController;

@interface AKImageDescriptionPopover : NSPopover <AXSSImageDescriptionViewControllerDelegate>

@property (weak, nonatomic) AKController *annotationController;
@property (retain, nonatomic) AXSSImageDescriptionViewController *imageDescriptionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)popoverWillClose:(id)a0;
- (void)_akImageDescriptionPopoverSetup;
- (void)_akImageDescriptionPopoverTearDown;
- (void)imageDescriptionViewControllerDidCancel:(id)a0;
- (void)imageDescriptionViewControllerDidSave:(id)a0;
- (id)initWithAnnotationController:(id)a0;

@end
