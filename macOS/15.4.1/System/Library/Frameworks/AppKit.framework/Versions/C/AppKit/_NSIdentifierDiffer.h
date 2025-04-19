@class NSOrderedSet, NSIndexSet, NSSet, NSString;

@interface _NSIdentifierDiffer : NSObject <_NSIdentifierDiffer> {
    NSOrderedSet *_beforeIdentifiers;
    NSOrderedSet *_afterIdentifiers;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_deletedIndexes;
    NSSet *_movePairs;
    BOOL _identifiersAreUnique;
}

@property (readonly, nonatomic) NSOrderedSet *beforeIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *afterIdentifiers;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_performDiffWithOptions:(long long)a0;
- (void)_performFoundationDiffWithOptions:(long long)a0;
- (void)_performHeckelDiffWithOptions:(long long)a0;
- (id)initWithBeforeIdentifiers:(id)a0 afterIdentifiers:(id)a1;
- (void)performDiff;
- (void)performDiffWithOptions:(long long)a0;

@end
