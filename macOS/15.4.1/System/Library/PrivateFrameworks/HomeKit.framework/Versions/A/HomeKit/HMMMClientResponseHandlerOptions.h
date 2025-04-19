@class HMMMMessageDestination, NSString;

@interface HMMMClientResponseHandlerOptions : NSObject

@property (readonly, nonatomic) HMMMMessageDestination *peerDestination;
@property (readonly, nonatomic) NSString *messageName;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithPeerDestination:(id)a0 messageName:(id)a1;

@end
