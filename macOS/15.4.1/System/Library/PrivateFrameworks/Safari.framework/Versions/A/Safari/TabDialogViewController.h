@class NSView;
@protocol TabDialogConfiguration, TabDialogView, TabDialogViewControllerDelegate;

@interface TabDialogViewController : NSViewController

@property (readonly, nonatomic) id<TabDialogConfiguration> configuration;
@property (weak, nonatomic) id<TabDialogViewControllerDelegate> delegate;
@property (retain) NSView<TabDialogView> *view;
@property (readonly, nonatomic) struct { int webProcessID; unsigned long long tabID; } slot;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismissCurrentDialogForTabID:(unsigned long long)a0 withResponse:(id)a1;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dialogConfiguration:(id)a2 slot:(struct { int x0; unsigned long long x1; })a3;

@end
