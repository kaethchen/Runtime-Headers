@class NSArray, NSMutableDictionary;

@interface _SCRUIElementCache : NSObject {
    struct __AXUIElement { } *_axElementRef;
}

@property (retain, nonatomic) NSMutableDictionary *_attributeToValueCache;
@property (nonatomic) long long populationLevel;
@property (retain, nonatomic) NSArray *accessibilityRows;

+ (void)invalidateAll;
+ (id)_attributesForAllPopulationLevels;
+ (id)_attributesForPopulationLevel:(long long)a0;
+ (long long)_populationLevelForAttribute:(id)a0;
+ (long long)_populationLevelMax;
+ (id)allCachableAttributes;
+ (id)cacheForAXUIElementRef:(struct __AXUIElement { } *)a0;
+ (id)cacheForAXUIElementRef:(struct __AXUIElement { } *)a0 createIfNeeded:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)valueForAttribute:(id)a0;
- (void)_populateForAttributes:(id)a0;
- (void)_populateIfNeededLevel:(long long)a0;
- (void)_setCacheValue:(void *)a0 forAttribute:(id)a1;
- (id)cachedAttributes;
- (id)canSetAttribute:(id)a0;
- (id)initWithAXUIElementRef:(struct __AXUIElement { } *)a0;
- (void)populateIfNeededLevel0;
- (void)populateIfNeededLevel1;
- (void)populateIfNeededLevel2;
- (void)populateIfNeededLevel3;

@end
