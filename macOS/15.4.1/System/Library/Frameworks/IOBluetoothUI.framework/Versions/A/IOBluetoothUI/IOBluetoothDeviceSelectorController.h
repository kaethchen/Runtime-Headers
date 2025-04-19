@interface IOBluetoothDeviceSelectorController : NSWindowController

+ (id)alloc;
+ (id)deviceSelector;
+ (id)withDeviceSelectorControllerRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;

- (int)runModal;
- (void)setPrompt:(id)a0;
- (void)setTitle:(id)a0;
- (void)setOptions:(unsigned int)a0;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)setHeader:(id)a0;
- (void)setCancel:(id)a0;
- (void)setSearchAttributes:(const struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)a0;
- (void)setDescriptionText:(id)a0;
- (id)getTitle;
- (void)addAllowedUUID:(id)a0;
- (void)addAllowedUUIDArray:(id)a0;
- (void)clearAllowedUUIDs;
- (id)getCancel;
- (id)getDescriptionText;
- (struct OpaqueIOBluetoothObjectRef { } *)getDeviceSelectorControllerRef;
- (id)getHeader;
- (unsigned int)getOptions;
- (id)getPrompt;
- (id)getResults;
- (const struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)getSearchAttributes;

@end
