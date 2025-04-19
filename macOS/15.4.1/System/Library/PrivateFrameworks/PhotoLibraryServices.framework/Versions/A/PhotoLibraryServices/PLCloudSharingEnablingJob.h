@interface PLCloudSharingEnablingJob : PLCloudSharingJob

@property (nonatomic) BOOL enableSharing;

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)a0 keepPendingAlbums:(BOOL)a1 withReason:(id)a2;
+ (void)disableCloudSharingWithLibraryServicesManager:(id)a0;
+ (void)enableCloudSharing:(BOOL)a0 withPathManager:(id)a1;

- (id)description;
- (void)run;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;

@end
