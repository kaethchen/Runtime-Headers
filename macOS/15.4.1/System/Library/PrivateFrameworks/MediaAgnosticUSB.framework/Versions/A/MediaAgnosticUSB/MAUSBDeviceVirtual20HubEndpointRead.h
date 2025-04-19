@interface MAUSBDeviceVirtual20HubEndpointRead : NSObject

@property (readonly) unsigned long long length;
@property (readonly) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0 completion:(id /* block */)a1;

@end
