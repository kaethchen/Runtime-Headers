@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject

@property (copy, nonatomic) NSNumber *numberOfUpdates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
