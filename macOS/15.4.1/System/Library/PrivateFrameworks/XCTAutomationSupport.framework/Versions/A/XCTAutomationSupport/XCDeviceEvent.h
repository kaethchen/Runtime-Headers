@interface XCDeviceEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long displayID;
@property unsigned int eventPage;
@property unsigned int usage;
@property double duration;
@property double rotation;
@property unsigned long long type;
@property long long clicks;
@property unsigned char buttonMask;
@property struct CGVector { double dx; double dy; } offset;
@property (readonly) BOOL isButtonHoldEvent;

+ (id)deviceEventForDigitalCrownRotation:(double)a0 velocity:(double)a1;
+ (id)deviceEventWithDisplayID:(long long)a0 knobOffset:(struct CGVector { double x0; double x1; })a1 knobButtons:(unsigned char)a2 duration:(double)a3;
+ (id)deviceEventWithDisplayID:(long long)a0 knobRotation:(long long)a1 duration:(double)a2;
+ (id)deviceEventWithDisplayID:(long long)a0 page:(unsigned int)a1 usage:(unsigned int)a2 duration:(double)a3;
+ (id)deviceEventWithPage:(unsigned int)a0 usage:(unsigned int)a1 duration:(double)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
