@class NSObject;
@protocol OS_dispatch_queue, SCWDatabaseStore;

@interface SCWFauxDatabaseStoreCoordinator : NSObject <SCWDatabaseStoreCoordinator>

@property (retain, nonatomic) id<SCWDatabaseStore> store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<SCWDatabaseStore> underlyingStore;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)readWithAccessor:(id /* block */)a0;
- (void)writeWithAccessor:(id /* block */)a0;
- (id)initWithDatabaseStore:(id)a0;
- (void)readZone:(id)a0 withAccessor:(id /* block */)a1;
- (void)reloadWithAccessor:(id /* block */)a0;
- (void)writeZone:(id)a0 withAccessor:(id /* block */)a1;

@end
