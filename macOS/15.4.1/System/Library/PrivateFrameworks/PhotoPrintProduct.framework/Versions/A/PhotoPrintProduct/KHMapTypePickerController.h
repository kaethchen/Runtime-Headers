@class NSPopUpButton, KHFrame, NSTextField;

@interface KHMapTypePickerController : UXViewController

@property (retain) NSTextField *mapTypeLabel;
@property (retain) NSPopUpButton *mapTypeButton;
@property (retain, nonatomic) KHFrame *mapFrame;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)mapTypeChanged:(id)a0;

@end
