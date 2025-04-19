@class LACDTOBiometryWatchdog;

@interface LACDTOBiometryWatchdogPack : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LACDTOBiometryWatchdog *biometryWatchdogGlobal;
@property (readonly, nonatomic) LACDTOBiometryWatchdog *biometryWatchdogDTO;
@property (readonly, nonatomic) BOOL isBarking;

+ (id)nullInstance;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBiometryWatchdogGlobal:(id)a0 biometryWatchdogDTO:(id)a1;

@end
