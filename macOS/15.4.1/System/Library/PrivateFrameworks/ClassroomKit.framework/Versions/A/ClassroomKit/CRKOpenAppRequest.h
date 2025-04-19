@class NSString, NSData;

@interface CRKOpenAppRequest : CATTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSData *activityData;
@property (nonatomic) BOOL lockInApp;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
