@class NSData, NSString, NSUserActivity;

@interface WFSiriUserActivityRequest : WFSiriActionRequest

@property (retain, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserActivityData:(id)a0 andBundleIdentifier:(id)a1;

@end
