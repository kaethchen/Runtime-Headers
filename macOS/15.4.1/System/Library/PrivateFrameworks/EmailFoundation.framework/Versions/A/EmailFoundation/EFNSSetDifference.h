@class NSSet;

@interface EFNSSetDifference : NSObject

@property (readonly) NSSet *insertions;
@property (readonly) NSSet *removals;
@property (readonly) BOOL hasChanges;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInsertedObjects:(id)a0 removedObjects:(id)a1;

@end
