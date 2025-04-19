@class NSDictionary, NSUUID, NSString;

@interface AXSwitch : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSDictionary *expressionToSwitchTypeMapping;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long action;
@property (nonatomic) long long longPressAction;
@property (retain, nonatomic) NSString *shortcutIdentifier;
@property (retain, nonatomic) NSString *longPressShortcutIdentifier;
@property (nonatomic) BOOL isEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *localizedSourceDescription;
@property (retain, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) BOOL hasLongPressAction;
@property (readonly, nonatomic) BOOL supportsLongPress;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) long long buttonNumber;
@property (nonatomic) long long headSwitch;
@property (nonatomic) unsigned long long cameraSwitch;
@property (nonatomic) unsigned long long expressionSensitivity;
@property (nonatomic) long long accessibilityEventUsagePage;
@property (nonatomic) long long accessibilityEventUsage;
@property (nonatomic) long long accessibilityEventModifierFlags;
@property (copy, nonatomic) NSString *remoteSwitchIdentifier;
@property (copy, nonatomic) NSString *remoteDeviceName;
@property (copy, nonatomic) NSString *remoteDeviceIdentifier;

+ (id)switchWithAction:(long long)a0 name:(id)a1 source:(id)a2 type:(id)a3;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0 name:(id)a1 source:(id)a2 type:(id)a3;

@end
