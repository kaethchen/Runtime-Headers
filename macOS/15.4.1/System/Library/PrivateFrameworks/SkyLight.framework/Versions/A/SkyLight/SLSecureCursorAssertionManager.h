@class NSMapTable, NSHashTable;

@interface SLSecureCursorAssertionManager : NSObject

@property (readonly, nonatomic) NSHashTable *strongAssertionUUIDs;
@property (readonly, nonatomic) NSMapTable *weakAssertionMap;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)invalidateUUID:(id)a0;
- (void)invalidateAll;
- (id)takeAssertion;
- (void)unmapUUID:(id)a0;

@end
