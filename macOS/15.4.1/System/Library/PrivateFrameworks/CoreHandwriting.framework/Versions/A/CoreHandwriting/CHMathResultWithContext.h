@class NSSet, CHTokenizedMathResult;

@interface CHMathResultWithContext : NSObject

@property (retain, nonatomic) CHTokenizedMathResult *result;
@property (readonly, nonatomic) NSSet *declaredVariables;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 declaredVariables:(id)a1;

@end
