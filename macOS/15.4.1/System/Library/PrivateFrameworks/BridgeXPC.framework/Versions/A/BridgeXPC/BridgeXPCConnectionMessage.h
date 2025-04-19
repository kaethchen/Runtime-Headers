@class NSData;

@interface BridgeXPCConnectionMessage : NSObject

@property (copy) id /* block */ barrier_block;
@property (retain) NSData *msg_hdr;
@property (retain) NSData *msg_body;

- (void).cxx_destruct;

@end
