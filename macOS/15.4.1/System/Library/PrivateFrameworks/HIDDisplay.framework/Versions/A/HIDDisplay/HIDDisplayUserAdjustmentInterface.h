@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) BOOL valid;

- (void).cxx_destruct;
- (BOOL)invalidate:(id *)a0;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (id)get:(id *)a0;
- (id)getHIDDevices;
- (BOOL)set:(id)a0 error:(id *)a1;
- (BOOL)setupInterface;

@end
