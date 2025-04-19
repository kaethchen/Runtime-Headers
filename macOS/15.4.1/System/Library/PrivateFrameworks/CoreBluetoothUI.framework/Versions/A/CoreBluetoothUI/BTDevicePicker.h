@protocol BTDevicePickerDelegate;

@interface BTDevicePicker : NSObject

@property (nonatomic) id<BTDevicePickerDelegate> delegate;

- (void)dismissAnimated:(BOOL)a0;
- (void)show;
- (id)initWithTitle:(id)a0 service:(unsigned int)a1 discoveryNameFilter:(id)a2;

@end
