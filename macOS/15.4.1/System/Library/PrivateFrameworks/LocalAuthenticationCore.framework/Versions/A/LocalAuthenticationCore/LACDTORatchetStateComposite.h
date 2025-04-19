@class LACDTOGracePeriodState, LACDTOBiometryWatchdogPack, LACDTORatchetState;

@interface LACDTORatchetStateComposite : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LACDTORatchetState *ratchetState;
@property (readonly, nonatomic) LACDTOGracePeriodState *gracePeriodState;
@property (readonly, nonatomic) LACDTOBiometryWatchdogPack *watchdogs;

+ (id)nullInstance;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRatchetState:(id)a0 gracePeriodState:(id)a1 watchdogs:(id)a2;

@end
