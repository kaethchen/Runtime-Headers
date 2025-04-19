@class NSError;

@interface CNFutureResult : NSObject

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setResult:(id)a0 error:(id)a1;

@end
