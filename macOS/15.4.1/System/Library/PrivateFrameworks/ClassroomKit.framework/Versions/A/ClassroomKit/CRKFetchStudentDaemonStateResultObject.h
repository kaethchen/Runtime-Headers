@class NSDictionary;

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *stateDictionary;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
