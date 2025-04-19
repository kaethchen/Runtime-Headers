@class NSXPCConnection;
@protocol KernelManagementClientProtocol;

@interface KernelManagementClient : NSObject {
    NSXPCConnection<KernelManagementClientProtocol> *_xpcConn;
}

@property (readonly) NSXPCConnection<KernelManagementClientProtocol> *connection;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (BOOL)enumerateKernelExtension:(id /* block */)a0 error:(id *)a1;
- (BOOL)checkAllFilesets:(id *)a0;
- (BOOL)clearAllStagedExtensions:(id *)a0;
- (BOOL)daemonIsReachable;
- (id)dumpStateWithError:(id *)a0;
- (id)getCollectionPathWithCollection:(id)a0 withError:(id *)a1;
- (BOOL)loadExtensionsWithPaths:(id)a0 withError:(id *)a1;
- (BOOL)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withNoAuth:(BOOL)a2 withError:(id *)a3;
- (BOOL)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withPersonalityNames:(id)a2 options:(unsigned long long)a3 withError:(id *)a4;
- (BOOL)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withPersonalityNames:(id)a2 withDependencyAndFolderPaths:(id)a3 options:(unsigned long long)a4 withError:(id *)a5;
- (BOOL)loadExtensionsWithPaths:(id)a0 withIdentifiers:(id)a1 withPersonalityNames:(id)a2 withNoAuth:(BOOL)a3 withError:(id *)a4;
- (BOOL)loadExtensionsWithPaths:(id)a0 withNoAuth:(BOOL)a1 withError:(id *)a2;
- (BOOL)migrateAuxKCForVolumeGroupUUID:(id)a0 withMigrationSuccess:(BOOL)a1 withRebootRequired:(BOOL *)a2 withError:(id *)a3;
- (id)pathOfExtensionWithIdentifier:(id)a0 withError:(id *)a1;
- (id)pathOfLoadableKernelCollectionOfType:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)rebuildAuxiliaryKernelCollectionWithInterface:(id)a0 rebootRequired:(BOOL *)a1 withError:(id *)a2;
- (BOOL)triggerAuxKCCleanup:(id)a0 withError:(id *)a1;
- (BOOL)triggerPanicMedicInRecoveryWithPath:(id)a0 withError:(id *)a1;
- (BOOL)unloadExtensionsWithIdentifiers:(id)a0 withClassNames:(id)a1 options:(unsigned long long)a2 withError:(id *)a3;

@end
