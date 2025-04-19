@class TIMecabraWrapper;

@interface TIWordSearchOperationFlushDynamicData : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void).cxx_destruct;
- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)a0;

@end
