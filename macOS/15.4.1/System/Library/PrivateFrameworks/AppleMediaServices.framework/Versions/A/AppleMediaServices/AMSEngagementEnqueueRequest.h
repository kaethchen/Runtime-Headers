@class NSArray, NSString, AMSProcessInfo;

@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSArray *destinations;
@property (retain) NSArray *events;
@property (retain) NSString *logKey;
@property double timeout;

+ (id)archiveClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
