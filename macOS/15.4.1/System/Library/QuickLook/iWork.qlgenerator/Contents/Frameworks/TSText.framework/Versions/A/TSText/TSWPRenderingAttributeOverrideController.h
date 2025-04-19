@class NSMapTable;

@interface TSWPRenderingAttributeOverrideController : NSObject

@property (readonly, nonatomic) NSMapTable *map;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addOverride:(id)a0 forStorage:(id)a1;
- (id)overrideWithKey:(id)a0 forStorage:(id)a1;
- (id)overridesForStorage:(id)a0;
- (void)removeAllOverridesForStorage:(id)a0;
- (void)removeOverrideWithKey:(id)a0 forStorage:(id)a1;

@end
