@class MAUSBGenericPALDevice, MAUSBControlSetupPacket;

@interface MAUSBGenericPALControlReadCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALDevice *pal;
@property (readonly) MAUSBControlSetupPacket *setupPacket;
@property (readonly) id /* block */ completionBlock;
@property (readonly) void *buffer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPAL:(id)a0 setupPacket:(id)a1 completionBlock:(id /* block */)a2;

@end
