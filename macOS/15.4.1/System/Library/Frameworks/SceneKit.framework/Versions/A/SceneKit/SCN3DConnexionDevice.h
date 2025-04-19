@interface SCN3DConnexionDevice : NSObject {
    struct __IOHIDDevice { } *deviceRef;
}

- (void)open;
- (void)handleReport:(unsigned int)a0 data:(id)a1;
- (id)initWithDeviceRef:(struct __IOHIDDevice { } *)a0;

@end
