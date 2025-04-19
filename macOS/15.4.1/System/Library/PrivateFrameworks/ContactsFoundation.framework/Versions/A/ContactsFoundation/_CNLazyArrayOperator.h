@interface _CNLazyArrayOperator : NSObject <_CNLazyArrayOperation>

@property (readonly) _CNLazyArrayOperator *input;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithInput:(id)a0;

@end
