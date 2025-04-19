@interface GKTable : NSObject {
    struct _gktableitem { unsigned int x0; id x1; double x2; double x3; } *_items;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)init;
- (id)allObjects;
- (void)lock;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)objectForKey:(unsigned int)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)a0;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void)unlock;
- (id)initWithSize:(unsigned long long)a0;
- (void)print;
- (void)touchObject:(id)a0;
- (void)touchObjectForKey:(unsigned int)a0;

@end
