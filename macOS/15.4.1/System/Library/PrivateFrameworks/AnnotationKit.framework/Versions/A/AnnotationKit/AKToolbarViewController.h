@class AKController;

@interface AKToolbarViewController : NSViewController

@property (weak) AKController *controller;
@property (readonly) BOOL isPresentingPopover;

+ (struct CGSize { double x0; double x1; })minimumSize;
+ (BOOL)isOptionKeyPressed;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (unsigned long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)teardown;
- (id)initWithController:(id)a0;
- (id)_toolbarButtonItemOfType:(unsigned long long)a0 style:(unsigned long long)a1;
- (void)revalidateItems;
- (void)setStrokeColorUIDisplayToColor:(id)a0;
- (void)setFillColorUIDisplayToColor:(id)a0;

@end
