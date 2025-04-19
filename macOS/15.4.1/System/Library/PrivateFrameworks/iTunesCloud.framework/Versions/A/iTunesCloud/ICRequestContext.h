@class ICNetworkConstraints, NSString, ICURLResponseAuthenticationProvider, ICDeviceInfo, ICClientInfo;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _allowsMutation : 1;
    BOOL _requestNotificationsEnabled;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ICClientInfo *clientInfo;
@property (readonly, nonatomic) ICDeviceInfo *deviceInfo;
@property (readonly, copy, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider;
@property (readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints;
@property (readonly, nonatomic) id tag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTag:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)setDeviceInfo:(id)a0;
- (void)setClientInfo:(id)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (void)enableRequestNotifications;
- (void)setAuthenticationProvider:(id)a0;
- (BOOL)_allowsMutation;
- (id)_genericUserAgent;
- (BOOL)_requestNotificationsEnabled;
- (id)_userAgentWithPlatformVersion;
- (id)_webkitUserAgentVersion;
- (id)initWithClientInfo:(id)a0;
- (id)initWithClientInfo:(id)a0 authenticationProvider:(id)a1;
- (void)setNetworkConstraints:(id)a0;

@end
