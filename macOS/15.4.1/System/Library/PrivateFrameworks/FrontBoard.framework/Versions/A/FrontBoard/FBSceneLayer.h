@class NSString, FBSSceneIdentityToken;

@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic) double level;
@property (nonatomic) long long alignment;
@property (readonly, nonatomic) BOOL isKeyboardLayer;
@property (readonly, nonatomic) BOOL isKeyboardProxyLayer;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, copy, nonatomic) NSString *externalSceneID;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *proxiedKeyboardOwner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layerWithFBSSceneLayer:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithContextID:(unsigned int)a0;
- (id)initAsKeyboard;
- (id)initAsKeyboardProxyWithOwner:(id)a0;

@end
