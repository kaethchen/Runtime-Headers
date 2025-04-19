@class NSArray;

@interface SCROutputSubstitutionEnumerator : NSObject

@property (readonly, nonatomic) NSArray *parsers;

- (void).cxx_destruct;
- (void)enumerateAction:(id)a0 indexes:(id)a1 block:(id /* block */)a2;
- (id)initWithParsers:(id)a0;

@end
