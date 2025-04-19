@class NSUUID, NSString, INShortcut;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSString *invocationPhrase;
@property (readonly, copy) INShortcut *shortcut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)userActivity;
- (id)intent;
- (id)initWithIntent:(id)a0;
- (id)_initWithIdentifier:(id)a0 invocationPhrase:(id)a1 shortcut:(id)a2;
- (id)_initWithVCVoiceShortcut:(id)a0;
- (id)initWithUserActivity:(id)a0;

@end
