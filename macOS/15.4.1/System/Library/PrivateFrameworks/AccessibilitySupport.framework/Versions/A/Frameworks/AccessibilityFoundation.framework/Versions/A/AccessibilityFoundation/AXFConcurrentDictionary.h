@class NSMutableDictionary, AXFDispatchQueue;

@interface AXFConcurrentDictionary : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_storage;
@property (readonly, nonatomic) AXFDispatchQueue *_queue;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)dictionaryRepresentation;

@end
