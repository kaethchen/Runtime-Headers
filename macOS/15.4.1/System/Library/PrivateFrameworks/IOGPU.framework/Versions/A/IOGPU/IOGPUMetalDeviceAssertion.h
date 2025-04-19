@interface IOGPUMetalDeviceAssertion : NSObject {
    struct _mach_right_send { unsigned int mrs_name; } fSendRight;
    unsigned long long fAssertionType;
    unsigned long long fAssertionOptions;
}

- (void)dealloc;
- (id)initWithDevice:(id)a0 assertionType:(unsigned long long)a1 options:(unsigned long long)a2;

@end
