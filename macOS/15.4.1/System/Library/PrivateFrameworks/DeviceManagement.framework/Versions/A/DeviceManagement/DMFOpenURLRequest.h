@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) BOOL lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
