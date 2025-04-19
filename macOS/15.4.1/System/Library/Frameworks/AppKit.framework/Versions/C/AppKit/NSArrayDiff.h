@class NSIndexSet, NSSet;

@interface NSArrayDiff : NSObject

@property (readonly, copy) NSIndexSet *removedObjectIndexes;
@property (readonly, copy) NSIndexSet *insertedObjectIndexes;
@property (readonly, copy) NSSet *movedObjectIndexes;
@property (readonly, getter=isEmpty) BOOL empty;

- (void)dealloc;
- (id)description;
- (id)initWithPreviousObjects:(id)a0 currentObjects:(id)a1;

@end
