@class NSURL, NSString;

@interface CRKFetchInstructorEndpointRequest : CATTaskRequest

@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (copy, nonatomic) NSString *instructordBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
