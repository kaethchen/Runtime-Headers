@class NSMutableDictionary;

@interface _LTDConfigurationCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_conditions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)_errorForType:(long long)a0 reason:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)objectForType:(long long)a0 completion:(id /* block */)a1;
- (id)objectForType:(long long)a0 error:(id *)a1;
- (void)removeObjectForType:(long long)a0;
- (void)setObject:(id)a0 forType:(long long)a1;

@end
