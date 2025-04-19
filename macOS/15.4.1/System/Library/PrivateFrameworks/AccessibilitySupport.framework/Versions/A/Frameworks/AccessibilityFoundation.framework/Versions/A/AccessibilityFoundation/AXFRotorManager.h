@class NSArray, AXFUIElement;

@interface AXFRotorManager : NSObject

@property (weak, nonatomic) AXFUIElement *rotorProviderElement;
@property (readonly, copy, nonatomic) NSArray *customRotors;
@property (readonly, copy, nonatomic) NSArray *customRotorNames;
@property (nonatomic) BOOL shouldGoUpHierarchy;

- (id)init;
- (void).cxx_destruct;
- (id)_customRotorItemResultsForProvider:(id)a0 withPredicate:(id)a1;
- (id)_customRotorNamesForElement:(id)a0 shouldGoUpHierarchy:(BOOL)a1;
- (id)_customRotorsForElement:(id)a0 shouldGoUpHierarchy:(BOOL)a1;
- (id)_rotorProviderForRotorName:(id)a0;
- (id)_webRotorItemResultsForProvider:(id)a0 withPredicate:(id)a1;
- (id)allResultsForCustomRotorName:(id)a0;
- (id)allResultsForWebRotorType:(id)a0;
- (id)initWithRotorProviderElement:(id)a0;

@end
