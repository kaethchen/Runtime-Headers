@class GEOResourceManifestConfiguration, GEOActiveTileGroup, NSString, NSArray, NSSet, GEOTileGroup, NSProgress, NSObject, GEOResources, GEODataSetDescription;
@protocol OS_dispatch_queue, GEOTileGroupActivationSessionDelegate;

@interface GEOTileGroupActivationSession : NSObject <GEOPListStateCapturing, NSProgressReporting> {
    NSObject<OS_dispatch_queue> *_workQueue;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _started;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished[2];
    BOOL _canceled;
    unsigned long long _phase;
    id<GEOTileGroupActivationSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOResourceManifestConfiguration *_configuration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    NSString *_environmentName;
    GEOActiveTileGroup *_activeTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    NSSet *_activeNames;
    GEODataSetDescription *_dataSet;
    NSArray *_migrators;
    long long _updateType;
    id _transaction;
    unsigned long long _stateCaptureHandle;
    NSArray *_mandatoryMigrationTasks;
    NSArray *_opportunisticMigrationTasks;
}

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 tileGroup:(id)a2 inResourceManifest:(id)a3 environmentName:(id)a4 oldTileGroup:(id)a5 activeScales:(id)a6 activeScenarios:(id)a7 activeNames:(id)a8 dataSet:(id)a9 migrators:(id)a10 updateType:(long long)a11 delegate:(id)a12 delegateQueue:(id)a13;

@end
