@class INIntent, NSArray, NSString, NSData, NSUserActivity, INImage;

@interface INShortcut : NSObject <INImageProxyInjecting, NSItemProviderReading, NSItemProviderWriting, INKeyImageProducing, NSSecureCoding, NSCopying>

@property (class, readonly, copy) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly, copy) NSData *activityData;
@property (readonly, copy) INImage *activityImage;
@property (readonly, copy) NSString *activitySubtitle;
@property (readonly, copy) NSString *activityBundleIdentifier;
@property (readonly) NSString *_title;
@property (readonly) NSString *_subtitle;
@property (readonly) NSString *_associatedAppBundleIdentifier;
@property (readonly, copy) INIntent *intent;
@property (readonly) NSUserActivity *userActivity;

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithIntent:(id)a0;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)_initWithIntent:(id)a0;
- (id)initWithActivityData:(id)a0 activityImage:(id)a1 activitySubtitle:(id)a2 activityBundleIdentifier:(id)a3;
- (id)initWithUserActivity:(id)a0;
- (id)initWithUserActivity:(id)a0 bundleIdentifier:(id)a1;
- (id)shortcutWithActivityBundleIdentifier:(id)a0;
- (id)shortcutWithActivityImage:(id)a0;

@end
