@class NSString;

@interface DMFFetchDMDStateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *dmdStateDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStateDescription:(id)a0;

@end
