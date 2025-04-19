@class NSData;

@interface LNXPCListenerEndpointContainer : NSObject {
    void /* unknown type, empty encoding */ auditTokenData;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ listenerEndpoint;
@property (nonatomic, copy) NSData *auditTokenData;
@property (nonatomic, retain) void /* unknown type, empty encoding */ resolvedAction;

- (id)init;
- (void).cxx_destruct;

@end
