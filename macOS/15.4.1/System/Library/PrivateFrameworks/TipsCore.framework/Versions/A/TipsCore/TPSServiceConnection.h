@class NSString, _TPSXPCConnection, NSXPCInterface;

@interface TPSServiceConnection : NSObject <_TPSXPCExportable> {
    _TPSXPCConnection *_connection;
}

@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSXPCInterface *remoteInterfaceInstance;
@property (retain, nonatomic) NSXPCInterface *exportedInterfaceInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)invalidate;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (id)initWithServiceName:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;

@end
