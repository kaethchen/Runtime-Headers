@class NSString, NSMutableArray;
@protocol OKActionResponder;

@interface OKActionBindingProxy : NSObject <OKSettingsSupport>

@property (copy, nonatomic) NSString *actionScript;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSMutableArray *shouldRecognizeSimultaneously;
@property (copy, nonatomic) NSMutableArray *requireToFail;
@property (nonatomic) BOOL canBeTriggeredWithoutInteractivity;
@property (nonatomic) id target;
@property (nonatomic) SEL selector;
@property (readonly) id<OKActionResponder> actionResponder;
@property (readonly) unsigned long long scope;
@property (nonatomic) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionBinding;
+ (id)actionBindingWithGestureRecognizer:(id)a0 fromActionResponder:(id)a1;
+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)unload;
- (BOOL)performAction:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)prepareAction:(id)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;

@end
