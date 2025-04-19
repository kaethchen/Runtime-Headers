@class NSXPCConnection;

@interface TSXDaemonServiceClient : NSObject {
    BOOL _inited;
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serviceName;
+ (id)clientProtocol;
+ (id)serverProtocol;
+ (id)sharedDaemonServiceClient;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)exportedObject;
- (id)propertyForRegistryEntryID:(unsigned long long)a0 key:(id)a1;
- (BOOL)callMethodForDaemonClient:(unsigned int)a0 clientMethodSelector:(unsigned int)a1 scalarInputs:(const unsigned long long *)a2 scalarInputCount:(unsigned int)a3 structInput:(const void *)a4 structInputSize:(unsigned long long)a5 scalarOutputs:(unsigned long long *)a6 scalarOutputCount:(unsigned int *)a7 error:(id *)a8;
- (BOOL)closeDaemonClient:(unsigned int)a0 error:(id *)a1;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (unsigned int)openDaemonClientWithRegistryEntryID:(unsigned long long)a0 clientType:(unsigned int)a1 error:(id *)a2;
- (id)propertiesForRegistryEntryID:(unsigned long long)a0;

@end
