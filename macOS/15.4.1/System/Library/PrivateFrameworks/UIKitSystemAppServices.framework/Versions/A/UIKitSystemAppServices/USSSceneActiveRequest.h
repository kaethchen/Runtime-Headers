@class NSString;

@interface USSSceneActiveRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)sceneActiveRequestForScene:(id)a0 isForegroundApp:(BOOL)a1 isActiveApp:(BOOL)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initCommon;

@end
