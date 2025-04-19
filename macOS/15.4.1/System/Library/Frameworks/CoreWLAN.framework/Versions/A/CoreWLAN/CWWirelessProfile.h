@class NSString, NSNumber, CW8021XProfile;

@interface CWWirelessProfile : NSObject <NSCopying, NSCoding>

@property (copy) NSString *ssid;
@property (retain) NSNumber *securityMode;
@property (copy) NSString *passphrase;
@property (retain) CW8021XProfile *user8021XProfile;

+ (id)profile;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToProfile:(id)a0;
- (id)passphrase;
- (void)setPassphrase:(id)a0;
- (void)setUser8021XProfile:(id)a0;
- (id)user8021XProfile;

@end
