@class NSArray, NSSet, NSMutableDictionary;

@interface _EDSearchableIndexPendingRemovals : NSObject <NSCopying> {
    NSMutableDictionary *_reasonsByIdentifier;
}

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSArray *purgedIdentifiers;
@property (readonly, nonatomic) NSArray *deletedIdentifiers;
@property (copy, nonatomic) NSSet *purgeReasons;
@property (copy, nonatomic) NSSet *exclusionReasons;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)removeIdentifier:(id)a0;
- (id)_identifiersPassingReasonsTest:(id /* block */)a0;
- (void)addIdentifiers:(id)a0 withReasons:(id)a1;
- (id)initWithPurgeReasons:(id)a0 exclusionReasons:(id)a1;
- (void)removeAllIdentifiers;

@end
