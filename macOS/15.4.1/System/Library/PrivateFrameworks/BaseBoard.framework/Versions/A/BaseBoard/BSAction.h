@class NSString, BSSettings, _BSActionResponder;

@interface BSAction : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable> {
    _BSActionResponder *_responder;
    BOOL _isImplicitOriginator;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_expectsResponse) BOOL expectsResponse;
@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)setInvalidationHandler:(id /* block */)a0;
- (BOOL)canSendResponse;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithInfo:(id)a0 responder:(id)a1;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithXPCDictionary:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)sendResponse:(id)a0;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)setNullificationHandler:(id /* block */)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
