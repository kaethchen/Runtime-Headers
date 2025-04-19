@interface ASDTPMEnabler : ASDTPMDevice

@property (nonatomic) int enableTransition;
@property (nonatomic) int disableTransition;

- (int)enable:(BOOL)a0;
- (BOOL)asdtHandlesPowerTransition:(int)a0;
- (int)asdtPowerStateChange:(int)a0;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;

@end
