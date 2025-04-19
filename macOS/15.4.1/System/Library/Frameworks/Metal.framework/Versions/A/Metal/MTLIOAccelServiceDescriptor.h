@interface MTLIOAccelServiceDescriptor : NSObject {
    unsigned int _acceleratorPort;
    Class _deviceClass;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) Class deviceClass;

- (void)dealloc;
- (id)initWithAcceleratorPort:(unsigned int)a0 deviceClass:(Class)a1;

@end
