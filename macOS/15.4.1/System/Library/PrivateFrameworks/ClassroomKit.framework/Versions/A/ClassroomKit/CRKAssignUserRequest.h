@class NSString, NSNumber, NSArray;

@interface CRKAssignUserRequest : CATTaskRequest

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *fullScreenImageURL;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *passcodeType;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSArray *enrolledCourseIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
