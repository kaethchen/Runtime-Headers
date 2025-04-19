@interface AVBATDECCCommandBarrier : AVBATDECCCommandEvent

@property (nonatomic) BOOL recoveryBarrier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ recoveryHandler;

- (void).cxx_destruct;

@end
