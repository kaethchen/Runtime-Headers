@class NSLock, NSMutableDictionary;

@interface NSSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    NSLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
