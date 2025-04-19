@interface DRDeviceArrayController : NSArrayController

- (void)dealloc;
- (id)init;
- (void)addObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setContent:(id)a0;
- (void)addObjects:(id)a0;
- (void)insertObject:(id)a0 atArrangedObjectIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atArrangedObjectIndexes:(id)a1;
- (void)removeObjectAtArrangedObjectIndex:(unsigned long long)a0;
- (void)removeObjects:(id)a0;
- (void)removeObjectsAtArrangedObjectIndexes:(id)a0;
- (void)_removeDevice:(id)a0;
- (void)_statusDidChange:(id)a0;
- (void)_addDevice:(id)a0;

@end
