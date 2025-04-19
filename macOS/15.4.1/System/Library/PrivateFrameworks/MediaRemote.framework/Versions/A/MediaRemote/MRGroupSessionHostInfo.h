@class NSString;

@interface MRGroupSessionHostInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned char routeType;
@property (readonly, nonatomic) NSString *localizedSessionName;
@property (readonly, nonatomic, getter=isLockScreenAffordanceAllowed) BOOL lockScreenAffordanceAllowed;
@property (readonly, nonatomic, getter=isInAppBannerAllowed) BOOL inAppBannerAllowed;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRouteType:(unsigned char)a0 displayName:(id)a1;
- (id)initWithRouteType:(unsigned char)a0 displayName:(id)a1 modelIdentifier:(id)a2 color:(id)a3;

@end
