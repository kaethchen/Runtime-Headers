@class NSArray, LAEnvironmentMechanismBiometry, LACEnvironmentState, LAEnvironmentMechanismUserPassword;

@interface LAEnvironmentState : NSObject <NSCopying>

@property (readonly, nonatomic) LACEnvironmentState *coreState;
@property (readonly, nonatomic) LAEnvironmentMechanismBiometry *biometry;
@property (readonly, nonatomic) LAEnvironmentMechanismUserPassword *userPassword;
@property (readonly, nonatomic) NSArray *companions;
@property (readonly, nonatomic) NSArray *allMechanisms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionParts;
- (id)initWithCoreState:(id)a0;

@end
