@interface IOBluetoothDeviceInquiryCSupportObject : NSObject {
    void /* function */ *_startedCallback;
    void /* function */ *_updatingNamesStartedCallback;
    void /* function */ *_deviceFoundCallback;
    void /* function */ *_deviceNameUpdatedCallback;
    void /* function */ *_completeCallback;
    void *_refCon;
}

+ (id)supportObjectWithRefCon:(void *)a0;

- (id)initWithRefCon:(void *)a0;
- (void)deviceInquiryComplete:(id)a0 error:(int)a1 aborted:(BOOL)a2;
- (void)deviceInquiryDeviceFound:(id)a0 device:(id)a1;
- (void)deviceInquiryDeviceNameUpdated:(id)a0 device:(id)a1 devicesRemaining:(unsigned int)a2;
- (void)deviceInquiryStarted:(id)a0;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(id)a0 devicesRemaining:(unsigned int)a1;

@end
