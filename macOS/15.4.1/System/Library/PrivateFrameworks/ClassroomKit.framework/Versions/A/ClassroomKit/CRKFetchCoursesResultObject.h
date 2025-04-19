@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *courses;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
