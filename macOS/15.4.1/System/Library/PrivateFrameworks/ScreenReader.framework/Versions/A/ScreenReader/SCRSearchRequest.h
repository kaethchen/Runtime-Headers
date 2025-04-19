@class AXFUIElement, NSArray, SCRSearchPosition, NSString;

@interface SCRSearchRequest : NSObject

@property (retain, nonatomic) SCRSearchPosition *start;
@property (readonly, nonatomic) AXFUIElement *container;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) NSArray *searchKeys;
@property (readonly, nonatomic) NSString *searchText;
@property (readonly, nonatomic) BOOL immediateDescendants;

- (void).cxx_destruct;
- (id)allResults;
- (id)nextResult;
- (id)_makeParameterWithLimit:(unsigned long long)a0;
- (id)_makeResultsWithArray:(id)a0;
- (id)initWithStart:(id)a0 container:(id)a1 direction:(long long)a2 searchKeys:(id)a3 searchText:(id)a4 immediateDescendants:(BOOL)a5;
- (id)searchWithLimit:(unsigned long long)a0;

@end
