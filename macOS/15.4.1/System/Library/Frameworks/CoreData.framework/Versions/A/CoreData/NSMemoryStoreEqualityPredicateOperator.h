@class NSManagedObjectContext;

@interface NSMemoryStoreEqualityPredicateOperator : NSEqualityPredicateOperator {
    NSManagedObjectContext *_context;
}

- (void)dealloc;
- (void)setContext:(id)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;

@end
