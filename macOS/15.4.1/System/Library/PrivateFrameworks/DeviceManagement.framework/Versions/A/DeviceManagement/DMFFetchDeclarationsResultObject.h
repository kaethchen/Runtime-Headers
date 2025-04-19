@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *payloadDescriptions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
