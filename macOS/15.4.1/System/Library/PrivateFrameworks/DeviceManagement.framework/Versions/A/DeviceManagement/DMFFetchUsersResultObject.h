@class NSArray;

@interface DMFFetchUsersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *users;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsers:(id)a0;

@end
