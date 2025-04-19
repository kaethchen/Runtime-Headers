@class NSMutableDictionary, NSString, NSURL, SMSystem_Daemon_Network, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_FileManager_Network : SMSystem_FileManager_macOS <SMSystem_FileManagerProtocol>

@property (getter=isFileSystemReady) BOOL fileSystemReady;
@property (retain) NSObject<OS_dispatch_queue> *cachedPathsQueue;
@property (retain) NSMutableDictionary *cachedPaths;
@property (retain) NSURL *localStorageArea;
@property (retain) SMSystem_Daemon_Network *system;
@property (readonly) NSURL *slash;
@property (readonly) NSURL *userContentRoot;
@property (readonly) NSURL *userHomeRoot;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)activate;
- (id)initWithSystem:(id)a0;
- (id)bundleInformationAtPaths:(id)a0;
- (id)determinePathToRemoteFile:(id)a0 exists:(BOOL *)a1 makeAvailable:(BOOL)a2;
- (id)pathToRemoteFile:(id)a0 exists:(BOOL *)a1 makeAvailable:(BOOL)a2;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;
- (id)transformLegacyAttributeResults:(id)a0;

@end
