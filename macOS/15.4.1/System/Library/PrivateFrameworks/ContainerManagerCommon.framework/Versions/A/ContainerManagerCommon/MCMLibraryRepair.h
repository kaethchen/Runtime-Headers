@class MCMManagedPathRegistry;
@protocol MCMFileManager, MCMContainerClassIterator;

@interface MCMLibraryRepair : NSObject

@property (readonly, nonatomic) MCMManagedPathRegistry *registry;
@property (nonatomic) BOOL pathsCreated;
@property (readonly, nonatomic) id<MCMFileManager> fileManager;
@property (readonly, nonatomic) id<MCMContainerClassIterator> classIterator;

- (void).cxx_destruct;
- (BOOL)_canRepairLocally;
- (id)_managedPathsForGenericRepair;
- (BOOL)createPathsIfNecessaryWithError:(id *)a0;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 error:(id *)a1 duringBlock:(id /* block */)a2;
- (BOOL)fixPermissionsWithManagedPath:(id)a0 uid:(unsigned int)a1 gid:(unsigned int)a2 error:(id *)a3;
- (id)initWithManagedPathRegistry:(id)a0 fileManager:(id)a1 classIterator:(id)a2;
- (BOOL)managedPathsHaveChanged;
- (BOOL)performGenericRepairWithError:(id *)a0;

@end
