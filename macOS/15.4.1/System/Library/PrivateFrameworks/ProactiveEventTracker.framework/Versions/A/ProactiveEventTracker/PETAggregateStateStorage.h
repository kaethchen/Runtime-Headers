@interface PETAggregateStateStorage : NSObject

+ (id)storageInMemory;
+ (id)storageOnDisk:(id)a0;

- (void)reset;
- (void)runWithLock:(id /* block */)a0;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (BOOL)resetLocked;
- (void)saveCorruptState;

@end
