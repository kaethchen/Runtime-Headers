@class NSArray, NSHashTable;

@interface NSUIActivityInfo : NSObject {
    NSHashTable *_providers;
}

@property (readonly, copy) NSArray *providers;
@property (getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly) unsigned long long providerCount;

- (void)dealloc;
- (id)init;
- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;
- (id)providers;

@end
