@class NSString, NSXPCInterface, NSXPCListenerEndpoint;

@interface AKXPCConnectionConfiguration : NSObject

@property (copy, nonatomic) NSString *machServiceName;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;

- (id)description;
- (void).cxx_destruct;

@end
