@protocol AXKElementTraversalStrategy, AXKElementFilterStrategy;

@interface AXKSearchManager : NSObject

@property (retain, nonatomic) id<AXKElementTraversalStrategy> _elementTraversalStrategy;
@property (nonatomic) unsigned long long searchStyle;
@property (readonly, nonatomic) id<AXKElementFilterStrategy> elementFilterStrategy;

- (void).cxx_destruct;
- (BOOL)isValidElement:(id)a0;
- (id)_ancestorElementFromElement:(id)a0 type:(unsigned long long)a1;
- (id)_deepestDescendantOfElement:(id)a0 direction:(unsigned long long)a1;
- (id)_escapeInconsistentParentChildDefinitions:(id)a0;
- (id)_findNextEffectiveElementFromElement:(id)a0 direction:(unsigned long long)a1 type:(unsigned long long)a2 scope:(unsigned long long)a3;
- (id)_firstDescendantForElement:(id)a0 type:(unsigned long long)a1;
- (BOOL)_meetsCriteriaForSearchType:(unsigned long long)a0 element:(id)a1;
- (id)_navigateToTheNextValidElementFromElement:(id)a0 direction:(unsigned long long)a1 type:(unsigned long long)a2;
- (id)_nextElementFromElement:(id)a0 direction:(unsigned long long)a1 type:(unsigned long long)a2 scope:(unsigned long long)a3;
- (id)_nextSearchLocationFromElement:(id)a0 direction:(unsigned long long)a1 scope:(unsigned long long)a2;
- (id)_searchChildrenCandidatesForElement:(id)a0;
- (id)_searchDecendantFromElement:(id)a0 direction:(unsigned long long)a1 type:(unsigned long long)a2;
- (id)_searchFromElement:(id)a0 direction:(unsigned long long)a1 type:(unsigned long long)a2;
- (id)ancestorElementFromElement:(id)a0 type:(unsigned long long)a1;
- (id)firstDecendantElementFromElement:(id)a0 type:(unsigned long long)a1;
- (id)initWithFilterStrategy:(id)a0 traversalStrategy:(id)a1;
- (id)lastDecendantElementFromElement:(id)a0 type:(unsigned long long)a1;
- (id)nextElementFromElement:(id)a0 type:(unsigned long long)a1 scope:(unsigned long long)a2;
- (id)previousElementFromElement:(id)a0 type:(unsigned long long)a1 scope:(unsigned long long)a2;

@end
