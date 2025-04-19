@class NSNumber;

@interface DMFSetAppTapToPayScreenLockRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *tapToPayScreenLock;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
