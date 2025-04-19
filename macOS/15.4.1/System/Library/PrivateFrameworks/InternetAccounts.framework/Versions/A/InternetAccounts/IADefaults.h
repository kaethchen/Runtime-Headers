@interface IADefaults : NSObject

+ (id)shared;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;

@end
