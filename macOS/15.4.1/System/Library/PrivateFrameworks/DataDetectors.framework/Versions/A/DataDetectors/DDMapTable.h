@class NSMutableDictionary;

@interface DDMapTable : NSObject {
    NSMutableDictionary *_content;
}

- (void).cxx_destruct;
- (id)dictionary;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;

@end
