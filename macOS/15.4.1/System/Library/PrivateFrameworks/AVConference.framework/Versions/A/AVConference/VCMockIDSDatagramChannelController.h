@interface VCMockIDSDatagramChannelController : VCObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)datagramChannelWithDestination:(id)a0;
- (id)datagramChannelSocketForDestination:(id)a0 ipPorts:(id)a1;
- (id)datagramChannelWithDestination:(id)a0 dataPath:(int)a1;
- (id)getFirstDatagramChannelIDS;
- (void)setReadyToReadBlockForDatagram:(id)a0 block:(id /* block */)a1;
- (void)setWriteDatagramBlockForDatagram:(id)a0 block:(id /* block */)a1;
- (void)setWriteDatagramsBlockForDatagram:(id)a0 block:(id /* block */)a1;

@end
