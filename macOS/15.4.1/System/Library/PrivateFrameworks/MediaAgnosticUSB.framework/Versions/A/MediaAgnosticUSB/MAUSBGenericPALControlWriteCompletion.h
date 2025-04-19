@class MAUSBGenericPALDevice, MAUSBControlSetupPacket;

@interface MAUSBGenericPALControlWriteCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALDevice *pal;
@property (readonly) MAUSBControlSetupPacket *setupPacket;
@property (readonly) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)initWithPAL:(id)a0 setupPacket:(id)a1 completionBlock:(id /* block */)a2;

@end
