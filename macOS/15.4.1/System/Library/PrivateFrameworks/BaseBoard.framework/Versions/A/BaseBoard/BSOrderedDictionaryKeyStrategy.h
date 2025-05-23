@interface BSOrderedDictionaryKeyStrategy : NSObject

@property (nonatomic) long long limitCount;
@property (copy, nonatomic) id /* block */ keyComparator;

+ (id)new;
+ (id)sortUsingComparator:(id /* block */)a0;
+ (id)sortByInsertionOrder;
+ (id)sortByInsertionOrderWithEntryLimit:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;

@end
