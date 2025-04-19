@class TRIBMLTDeployment;

@interface TRIBMLTFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIBMLTDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)persisted;
- (id)bmltIdentifiers;
- (BOOL)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;

@end
