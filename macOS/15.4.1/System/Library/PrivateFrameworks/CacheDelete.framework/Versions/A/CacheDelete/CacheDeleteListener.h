@class NSXPCListener, Protocol, NSString, NSMutableSet;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>

@property (nonatomic) BOOL isResumed;
@property (retain, nonatomic) id xObj;
@property (retain, nonatomic) NSMutableSet *requiredEntitlements;
@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)suspend;
- (void)addRequiredEntitlement:(id)a0;
- (id)initWithName:(id)a0 listener:(id)a1 protocol:(id)a2 exportedObj:(id)a3 isExtension:(BOOL)a4;

@end
