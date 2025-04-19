@class NSDictionary, NSArray, AMSEngagementRequest;

@interface AMSEngagementPushEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *data;
@property (retain) NSArray *actions;
@property (retain) AMSEngagementRequest *request;

+ (id)archiveClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
