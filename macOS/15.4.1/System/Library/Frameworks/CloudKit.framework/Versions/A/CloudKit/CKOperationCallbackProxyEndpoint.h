@class NSXPCListenerEndpoint, NSXPCInterface, Protocol;

@interface CKOperationCallbackProxyEndpoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, copy, nonatomic) NSXPCInterface *interface;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClass:(Class)a0 protocol:(id)a1 endpoint:(id)a2;

@end
