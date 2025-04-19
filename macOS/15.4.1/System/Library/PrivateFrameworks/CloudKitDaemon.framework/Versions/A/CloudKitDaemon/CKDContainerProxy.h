@class CKDAppContainerTuple, NSString, CKDContainer, CKCoalescer, CKDLogicalDeviceScopedClientProxy, CKContainerOptions, CKEntitlements, CKDXPCConnection;
@protocol CKXPCContainerScopedClient;

@interface CKDContainerProxy : NSProxy <CKPropertiesDescription, NSDiscardableContent, CKXPCContainerScopedDaemon> {
    BOOL _inactive;
    BOOL _memoryPressure;
    unsigned long long _accessCount;
    CKDContainer *_strongContainer;
    CKDLogicalDeviceScopedClientProxy *_logicalDeviceScopedClientProxy;
    CKCoalescer *_coalescer;
}

@property (readonly, copy, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (readonly, copy, nonatomic) CKEntitlements *entitlements;
@property (readonly, copy, nonatomic) CKContainerOptions *options;
@property (readonly, nonatomic) id<CKXPCContainerScopedClient> distantContainer;
@property (readonly, weak, nonatomic) CKDXPCConnection *connection;
@property (readonly, weak) CKDContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)class;

- (void)dealloc;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)isContentDiscarded;
- (id)CKStatusReportArray;
- (void)beginContentAccess:(id /* block */)a0;
- (void)handleMemoryPressure:(long long)a0 completionHandler:(id /* block */)a1;
- (void)isContentDiscarded:(id /* block */)a0;
- (void)handleMemoryPressure:(long long)a0;
- (void)handleMemoryPressureNotification:(id)a0;
- (id)initWithAppContainerTuple:(id)a0 entitlements:(id)a1 options:(id)a2 distantContainer:(id)a3 connection:(id)a4;

@end
