@class NSString, NSDate;

@interface PrivacyProxyAppStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long appStatus;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *path;
@property (retain) NSDate *activeDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)appStatusString;
- (id)initWithStatus:(unsigned long long)a0 bundleID:(id)a1 path:(id)a2 activeDate:(id)a3;

@end
