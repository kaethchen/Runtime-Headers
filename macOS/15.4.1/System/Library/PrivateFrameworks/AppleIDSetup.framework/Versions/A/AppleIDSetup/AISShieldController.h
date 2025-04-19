@interface AISShieldController : NSObject

@property (nonatomic, retain) void /* unknown type, empty encoding */ remoteListener;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presenter;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)presentShieldFlowWithContext:(id)a0;
- (void)presentShieldOptions;

@end
