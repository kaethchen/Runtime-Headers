@class TSBonjourIPv4Address, NSArray, TSBonjourNode, TSBonjourIPv6Address, NSString, NSObject;
@protocol OS_dispatch_queue, TSBonjourInterfaceDelegate;

@interface TSBonjourInterface : NSObject {
    struct _DNSServiceRef_t { } *_resolveRef;
    struct _DNSServiceRef_t { } *_addressRef;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSString *_type;
    NSString *_domain;
    unsigned int _interfaceIndex;
    NSString *_hostTarget;
    unsigned short _port;
}

@property (copy, nonatomic) TSBonjourIPv4Address *ipv4Address;
@property (copy, nonatomic) NSArray *ipv4Addresses;
@property (copy, nonatomic) TSBonjourIPv6Address *ipv6Address;
@property (copy, nonatomic) NSArray *ipv6Addresses;
@property (nonatomic) TSBonjourNode *node;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (nonatomic) id<TSBonjourInterfaceDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 type:(id)a1 andDomain:(id)a2 onInterfaceIndex:(unsigned int)a3 andName:(id)a4;
- (void)pokeIPv6Destination;
- (void)resolvedWithHostTarget:(const char *)a0 port:(unsigned short)a1;
- (BOOL)startAddressLookupWithError:(id *)a0;
- (BOOL)startResolveWithError:(id *)a0;
- (BOOL)stopAddressLookup;
- (BOOL)stopResolve;

@end
