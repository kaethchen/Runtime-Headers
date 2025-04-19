@interface TUNearbyDeviceHandleCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAVLessCapable) BOOL avLessCapable;
@property (readonly, nonatomic, getter=isLagunaCapable) BOOL lagunaCapable;
@property (readonly, nonatomic, getter=isAudioCallCapable) BOOL audioCallCapable;
@property (readonly, nonatomic, getter=isTelephonyRelayCapable) BOOL telephonyRelayCapable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAVLessCapable:(BOOL)a0 lagunaCapable:(BOOL)a1 audioCallCapable:(BOOL)a2 telephonyRelayCapable:(BOOL)a3;

@end
