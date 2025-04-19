@class NSString, AMSProcessInfo;

@interface AMSFDSOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long action;
@property (readonly) NSString *bundleIdentifier;
@property (retain) AMSProcessInfo *clientInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
