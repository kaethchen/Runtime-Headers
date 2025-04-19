@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface ABCNCalculatesMultiValueDiff : NSObject {
    NSArray *_multiValue1;
    NSArray *_multiValue2;
    NSOrderedSet *_originalIdentifiers;
    NSOrderedSet *_finalIdentifiers;
    NSMutableOrderedSet *_addedIdentifiers;
    NSMutableOrderedSet *_removedIdentifiers;
    NSMutableOrderedSet *_sameIdentifiers;
    NSMutableOrderedSet *_calculatedFinalIdentifiers;
    NSMutableArray *_updates;
}

+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;

- (void)dealloc;
- (id)updates;
- (void)setupCalculatedFinalIdentifiers;
- (void)appendAddUpdates;
- (void)appendRemoveUpdates;
- (void)appendReorderUpdates;
- (void)appendReplaceUpdates;
- (void)calculateDiff;
- (void)ifEntryWithIdentifierIsDifferent:(id)a0 block:(id /* block */)a1;
- (id)initWithMultiValue1:(id)a0 multiValue2:(id)a1;
- (void)setupAddedIdentifiers;
- (void)setupFinalIdentifiers;
- (void)setupOriginalIdentifiers;
- (void)setupRemovedIdentifiers;
- (void)setupSameIdentifiers;

@end
