@interface ACFNetworkInterface : NSObject

@property (readonly) struct __SCNetworkInterface { } *ref;

+ (id)interfaceWithInterfaceRef:(struct __SCNetworkInterface { } *)a0;
+ (id)interfaceWithInterfaceRef:(struct __SCNetworkInterface { } *)a0 interfaceType:(id)a1;
+ (id)interfaceWithInterfaceType:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)localizedDisplayName;
- (id)interfaceType;
- (id)MACAddress;
- (id)BSDName;
- (id)initWithInterfaceType:(id)a0;
- (id)underlyingInterface;
- (id)initWithInterfaceRef:(struct __SCNetworkInterface { } *)a0;
- (id)initWithInterfaceRef:(struct __SCNetworkInterface { } *)a0 interfaceType:(id)a1;
- (id)supportedInterfaceTypes;
- (id)supportedProtocolTypes;
- (id)underlyingInterfaceForInterfaceType:(id)a0;

@end
