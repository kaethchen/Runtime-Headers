@class ICLightweightMusicSubscriptionStatus;

@interface ICLightweightMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithExtendedSubscriptionStatusResponse:(id)a0;

@end
