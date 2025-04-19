@class NSString;

@interface KTOptInStateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL fetchCloudKit;
@property BOOL sync;
@property (retain) NSString *application;
@property (retain) NSString *uri;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplication:(id)a0;

@end
