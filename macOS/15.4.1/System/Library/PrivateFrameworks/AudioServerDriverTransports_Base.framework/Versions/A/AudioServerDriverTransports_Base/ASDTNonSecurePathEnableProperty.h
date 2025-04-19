@interface ASDTNonSecurePathEnableProperty : ASDTUInt32Property

@property (nonatomic) BOOL enabled;

+ (id)createForInput;
+ (BOOL)setNonSecureInputEnabled:(BOOL)a0 onDevice:(id)a1;

- (BOOL)enabled;
- (void)setEnabled:(BOOL)a0;
- (id)initWithConfig:(id)a0;

@end
