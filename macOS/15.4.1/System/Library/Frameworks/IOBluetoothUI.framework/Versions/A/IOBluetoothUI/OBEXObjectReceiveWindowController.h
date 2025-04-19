@interface OBEXObjectReceiveWindowController : NSWindowController

+ (id)alloc;

- (BOOL)isKindOfClass:(Class)a0;
- (void)runModal;
- (void)setTitle:(id)a0;
- (void)stop;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)getDevice;
- (id)getTitle;
- (id)initObjectReceiveWithBluetoothDevice:(id)a0 defaultVCardName:(id)a1 destination:(id)a2 delegate:(id)a3;
- (id)initObjectReceiveWithBluetoothDevice:(id)a0 targetFiles:(id)a1 destination:(id)a2 delegate:(id)a3;
- (void)runPanel;
- (void)setIconImage:(id)a0;

@end
