@class NSString, NSDate;

@interface WDHTTPCookie : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (nonatomic, getter=isHTTPOnly) BOOL httpOnly;
@property (nonatomic, getter=isSession) BOOL session;
@property (nonatomic) long long sameSitePolicy;

+ (id)defaultCookieWithName:(id)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)isEqualToCookie:(id)a0;
- (id)toJSONPayload;

@end
