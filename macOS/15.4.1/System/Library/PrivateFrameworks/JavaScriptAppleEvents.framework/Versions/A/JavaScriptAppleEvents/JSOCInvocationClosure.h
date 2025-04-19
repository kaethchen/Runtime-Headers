@interface JSOCInvocationClosure : JSOCClosure

@property (copy) id /* block */ invocationBlock;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 invocationBlock:(id /* block */)a1;

@end
