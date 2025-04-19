@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;

- (void)dealloc;
- (id)sqlCore;
- (id)initWithPersistentStore:(id)a0;

@end
