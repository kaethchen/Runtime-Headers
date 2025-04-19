@class Protocol, NSUUID, APXPCRemoteConnection, APUnfairLock, NSString;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol>

@property (class, readonly, nonatomic) APUnfairLock *unfairLock;

@property (retain, nonatomic) id remoteObjectProxy;
@property (retain, nonatomic) APXPCRemoteConnection *connection;
@property (retain, nonatomic) NSUUID *delegateID;
@property (readonly, nonatomic) Protocol *exportedInterface;
@property (readonly, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)finished;
- (id)remoteObjectInterface;
- (id)xpcConnection;
- (void)connectionInvalidated;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;

@end
