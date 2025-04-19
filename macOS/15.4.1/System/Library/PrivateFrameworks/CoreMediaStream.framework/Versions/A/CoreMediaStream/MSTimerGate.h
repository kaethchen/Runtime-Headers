@interface MSTimerGate : NSObject

@property (nonatomic) BOOL enabled;

- (id)init;
- (void)disable;
- (void)enable;

@end
