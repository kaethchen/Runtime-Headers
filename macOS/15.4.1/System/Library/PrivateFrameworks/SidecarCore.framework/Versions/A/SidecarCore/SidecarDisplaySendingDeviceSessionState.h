@class SidecarDevice;

@interface SidecarDisplaySendingDeviceSessionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SidecarDevice *device;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) long long visualDetectability;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 sessionState:(long long)a1;
- (id)initWithDevice:(id)a0 sessionState:(long long)a1 visualDetectability:(long long)a2;

@end
