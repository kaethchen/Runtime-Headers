@class NSMutableDictionary, MSVLRUDictionaryNode;
@protocol MSVLRUDictionaryDelegate;

@interface MSVLRUDictionary : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) MSVLRUDictionaryNode *head;
@property (retain, nonatomic) MSVLRUDictionaryNode *tail;
@property (nonatomic) long long transactionCount;
@property (weak, nonatomic) id<MSVLRUDictionaryDelegate> delegate;
@property (nonatomic) long long maximumCapacity;
@property (readonly, nonatomic) long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)allKeys;
- (void).cxx_destruct;
- (id)allValues;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)beginTransaction;
- (void)endTransaction;
- (void)performTransaction:(id /* block */)a0;
- (id)peekObjectForKey:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (void)_removeNode:(id)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void)_shrinkToCapacity;
- (void)pokeKey:(id)a0;

@end
