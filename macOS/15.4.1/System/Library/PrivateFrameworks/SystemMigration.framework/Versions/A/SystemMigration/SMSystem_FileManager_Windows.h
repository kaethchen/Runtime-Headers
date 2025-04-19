@class NSURL, SMSystem_Daemon_Windows, NSString;

@interface SMSystem_FileManager_Windows : NSObject <SMSystem_FileManagerProtocol>

@property (retain) SMSystem_Daemon_Windows *system;
@property (readonly, getter=isFileSystemReady) BOOL fileSystemReady;
@property (readonly) NSURL *slash;
@property (readonly) NSURL *userContentRoot;
@property (readonly) NSURL *userHomeRoot;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;

- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)activate;
- (id)initWithSystem:(id)a0;
- (id)bundleInformationAtPaths:(id)a0;
- (id)pathToRemoteFile:(id)a0 exists:(BOOL *)a1 makeAvailable:(BOOL)a2;
- (id)propertiesForWindowsPaths:(id)a0;
- (id)propertiesForWindowsPaths:(id)a0 sizeDirectories:(BOOL)a1;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;
- (unsigned long long)sizeForWindowsPath:(id)a0;
- (BOOL)windowsPathExists:(id)a0;

@end
