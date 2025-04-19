@class AVBInterface, AVBATDECCEntity;

@interface AVBATDECCCommandLock : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBATDECCEntity *targetEntity;
@property (retain, nonatomic) AVBInterface *interface;
@property (copy, nonatomic) id /* block */ normalHandler;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) BOOL unlock;

- (void).cxx_destruct;

@end
