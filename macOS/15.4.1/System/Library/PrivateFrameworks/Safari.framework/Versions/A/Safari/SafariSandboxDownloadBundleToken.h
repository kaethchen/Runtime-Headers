@class NSUUID, NSString, NSURL;

@interface SafariSandboxDownloadBundleToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *downloadIdentifier;
@property (readonly, copy, nonatomic) NSString *sandboxToken;
@property (readonly, nonatomic) NSURL *downloadBundleURL;
@property (readonly, copy, nonatomic) NSString *downloadFilename;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDownloadIdentifier:(id)a0 sandboxToken:(id)a1 downloadBundleURL:(id)a2 downloadFilename:(id)a3;

@end
