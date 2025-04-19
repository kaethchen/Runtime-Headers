@interface AVBATDECCCommandDelay : AVBATDECCCommandEvent

@property (copy, nonatomic) id /* block */ normalHandler;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) unsigned long long delayInUSec;

- (void).cxx_destruct;

@end
