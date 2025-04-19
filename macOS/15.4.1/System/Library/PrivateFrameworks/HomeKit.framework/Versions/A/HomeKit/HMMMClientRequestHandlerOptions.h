@class HMMMMessageDestination, NSString, HMUser;

@interface HMMMClientRequestHandlerOptions : NSObject

@property (readonly, nonatomic) HMMMMessageDestination *peerDestination;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) HMUser *user;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithPeerDestination:(id)a0 messageName:(id)a1 user:(id)a2;

@end
