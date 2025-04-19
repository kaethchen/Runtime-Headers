@class TPSAppEntity;

@interface TPSAppEntityValidation : TPSTargetingValidation

@property (readonly, nonatomic) TPSAppEntity *appEntity;

- (void).cxx_destruct;
- (id)initWithAppEntity:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
