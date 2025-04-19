@class NSString;

@interface ASWebAuthenticationSessionCallback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long callbackType;
@property (readonly, nonatomic) NSString *customScheme;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *downloadMIMEType;

+ (id)callbackWithCustomScheme:(id)a0;
+ (id)callbackWithHTTPSHost:(id)a0 path:(id)a1;
+ (id)callbackWithDownloadMIMEType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matchesURL:(id)a0;
- (id)_initWithCustomScheme:(id)a0 host:(id)a1 path:(id)a2 downloadMIMEType:(id)a3;

@end
