@class MAUSBManagementPacket;

@interface MAUSBManagementRequest : NSObject

@property (readonly) MAUSBManagementPacket *packet;
@property (readonly) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithPacket:(id)a0 completion:(id /* block */)a1;

@end
