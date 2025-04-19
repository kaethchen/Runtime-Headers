@class NSURL;

@interface IXGlobalConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dynamicPropertyLock;
}

@property (readonly, nonatomic) NSURL *daemonUserHome;
@property (readonly, nonatomic) NSURL *rootPath;
@property (readonly, nonatomic) NSURL *dataStorageHome;
@property (readonly, nonatomic) NSURL *frameworkURL;
@property (readonly, nonatomic) NSURL *userVolumeURL;
@property (readonly, nonatomic) unsigned int daemonUID;
@property (readonly, nonatomic) unsigned int daemonGID;
@property (readonly, nonatomic) BOOL isiPad;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)createDirectories;
- (id)removabilityDirectoryWithError:(id *)a0;
- (id)_dataStorageHomeURLWithError:(id *)a0;
- (id)_userTempDirURLWithError:(id *)a0;
- (id)dataDirectoryAbortingOnError;
- (id)dataDirectoryWithError:(id *)a0;
- (id)extractedInstallableStagingDirectory:(id *)a0;
- (id)iconStagingDirectoryWithError:(id *)a0;
- (id)promiseStagingRootDirectoryAbortingOnError;
- (id)promiseStagingRootDirectoryWithError:(id *)a0;
- (id)remoteInstallationStagingDirectory:(id *)a0;
- (id)removabilityDirectoryAbortingOnError;

@end
