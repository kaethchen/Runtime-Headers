@class NSString, NSURL;

@interface AAPSyncAppIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSURL *bundleURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppId:(id)a0 bundleURL:(id)a1;
- (BOOL)isMetaDataItemDelete;
- (id)siriIdentifier;

@end
