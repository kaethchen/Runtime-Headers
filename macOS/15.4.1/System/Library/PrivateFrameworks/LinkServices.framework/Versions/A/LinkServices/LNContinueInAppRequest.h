@class LNDialog, NSUUID, NSString, LNContinueInAppRequestSceneOptions;

@interface LNContinueInAppRequest : LNRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) LNContinueInAppRequestSceneOptions *sceneOptions;
@property (readonly, copy, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic, getter=isThrowing) BOOL throwing;
@property (readonly, nonatomic) BOOL requestConfirmation;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long options;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithSuccess;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 throwing:(BOOL)a2 requestConfirmation:(BOOL)a3 type:(long long)a4 sceneOptions:(id)a5 bundleIdentifier:(id)a6 options:(unsigned long long)a7;

@end
