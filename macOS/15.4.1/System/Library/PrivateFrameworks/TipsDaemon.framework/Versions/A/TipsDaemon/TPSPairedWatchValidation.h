@class NSUUID;

@interface TPSPairedWatchValidation : TPSTargetingValidation

@property (copy, nonatomic) NSUUID *capability;

- (void).cxx_destruct;
- (id)initWithCapability:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
