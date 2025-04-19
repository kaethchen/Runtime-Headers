@class NSString, WBSConfigurationDownloader, NSURL, NSTimer, NSObject;
@protocol WBSRemotelyUpdatableDataSnapshot, OS_dispatch_source, OS_dispatch_queue, WBSRemotelyUpdatableDataControllerDelegate;

@interface WBSRemotelyUpdatableDataController : NSObject {
    long long _dataFormat;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    id /* block */ _builtInListDataProvider;
    NSURL *_downloadsDirectoryURL;
    NSString *_resourceName;
    NSString *_resourceVersion;
    NSString *_updateDateDefaultsKey;
    Class _snapshotClass;
    Class _snapshotTransformerClass;
    double _updateInterval;
    id<WBSRemotelyUpdatableDataSnapshot> _builtInSnapshot;
    id<WBSRemotelyUpdatableDataSnapshot> _remotelyLoadedSnapshot;
    id<WBSRemotelyUpdatableDataSnapshot> _currentSnapshot;
    WBSConfigurationDownloader *_configurationDownloader;
    NSTimer *_updateTimer;
    NSObject<OS_dispatch_source> *_downloadedFileChangedSource;
    NSObject<OS_dispatch_source> *_downloadedFileChangedCoalescingSource;
}

@property (weak, nonatomic) id<WBSRemotelyUpdatableDataControllerDelegate> delegate;
@property (nonatomic) BOOL shouldAttemptToUpdateConfiguration;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;
@property (nonatomic) BOOL dataIsUsedByMultipleProcesses;
@property (nonatomic) BOOL shouldKeepBuiltInSnapshotLoaded;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (void)accessSnapshotLoadingItIfNeeded:(id /* block */)a0;
- (id)initWithDataFormat:(long long)a0 builtInListURL:(id)a1 downloadsDirectoryURL:(id)a2 resourceName:(id)a3 resourceVersion:(id)a4 updateDateDefaultsKey:(id)a5 updateInterval:(double)a6 snapshotClass:(Class)a7 snapshotTransformerClass:(Class)a8;
- (void)prepareForTermination;
- (void)_loadDownloadedSnapshotIfNeeded;
- (void)_didDownloadSnapshot:(id)a0;
- (id)_downloadedListResourceName;
- (id)_fileExtensionForData;
- (void)_loadBuiltInSnapshotIfNeeded;
- (void)_resetUpdateTimer;
- (void)_setUpDownloadedFileMonitoring;
- (void)_stopDownloadedFileMonitoring;
- (void)_updateDownloadedDataIfNecessary;
- (id)_urlOfDownloadedList;
- (id)_urlOfInternalOverrideList;
- (void)_writeConfigurationData:(id)a0;
- (void)accessBuiltInAndRemotelyLoadedSnapshots:(id /* block */)a0;
- (void)accessCurrentSnapshot:(id /* block */)a0;
- (id)fetchDataFromRemotelyLoadedSnapshotFallingBackToBuiltInSnapshot:(id /* block */)a0;
- (id)initWithDataFormat:(long long)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5 snapshotClass:(Class)a6 snapshotTransformerClass:(Class)a7 builtInDataProvider:(id /* block */)a8;

@end
