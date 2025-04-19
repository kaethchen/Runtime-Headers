@class NSString, AXFUIElement, SCRCustomRotorPosition;

@interface SCRCustomRotorRequest : NSObject

@property (retain, nonatomic) SCRCustomRotorPosition *start;
@property (readonly, nonatomic) AXFUIElement *rotorUIElement;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) NSString *rotorIdentifier;
@property (readonly, nonatomic) NSString *filterText;

- (void).cxx_destruct;
- (id)allResults;
- (id)nextResult;
- (id)_makeParameterWithLimit:(unsigned long long)a0;
- (id)_makeResultsWithArray:(id)a0;
- (id)initWithRotorIdentifier:(id)a0 start:(id)a1 rotorUIElement:(id)a2 direction:(long long)a3 filterText:(id)a4;
- (id)searchWithLimit:(unsigned long long)a0;

@end
