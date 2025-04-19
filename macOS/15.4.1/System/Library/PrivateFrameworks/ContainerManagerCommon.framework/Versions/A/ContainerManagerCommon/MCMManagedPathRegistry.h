@class NSSet, MCMManagedPath, MCMPOSIXUser;

@interface MCMManagedPathRegistry : NSObject

@property (readonly, nonatomic) BOOL privileged;
@property (readonly, nonatomic) MCMManagedPath *containermanagerLibraryIntermediate;
@property (readonly, nonatomic) MCMManagedPath *containermanagerCachesIntermediate;
@property (readonly, nonatomic) MCMPOSIXUser *daemonUser;
@property (readonly, nonatomic) NSSet *paths;
@property (readonly, nonatomic) MCMManagedPath *home;
@property (readonly, nonatomic) MCMManagedPath *library;
@property (readonly, nonatomic) MCMManagedPath *containermanagerLibrary;
@property (readonly, nonatomic) MCMManagedPath *caches;
@property (readonly, nonatomic) MCMManagedPath *containermanagerCaches;
@property (readonly, nonatomic) MCMManagedPath *containermanagerDeathrow;

- (void).cxx_destruct;
- (void)_addPaths:(id)a0;
- (void)_initPathPropertiesWithDaemonUser:(id)a0;
- (id)initWithDaemonUser:(id)a0 privileged:(BOOL)a1;
- (id)managedPathForURL:(id)a0;
- (id)orderedPathsFromPaths:(id)a0;

@end
