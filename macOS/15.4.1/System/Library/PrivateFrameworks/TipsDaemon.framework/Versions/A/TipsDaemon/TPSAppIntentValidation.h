@class TPSAppIntent;

@interface TPSAppIntentValidation : TPSTargetingValidation

@property (readonly, nonatomic) TPSAppIntent *appIntent;

- (void).cxx_destruct;
- (id)initWithAppIntent:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
