@class NSDictionary;

@interface DMFFetchAppInfoResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *managedApps;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAttributes:(id)a0 forApp:(id)a1;

@end
