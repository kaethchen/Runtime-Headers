@class NSString, NSDictionary, _MXExtensionProvider, NSSet, NSExtension;

@interface _MXExtension : NSObject

@property (readonly, nonatomic) NSExtension *extension;
@property (weak, nonatomic) _MXExtensionProvider *provider;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;

- (id)description;
- (void).cxx_destruct;
- (id)_containingAppIdentifer;
- (BOOL)_isIntentExtension;
- (BOOL)_isMapsExtension;
- (BOOL)_setEnabled:(BOOL)a0 error:(id *)a1;
- (id)handleRequest:(id)a0 requestDispatcher:(id)a1 completion:(id /* block */)a2;
- (id)initWithExtensionIdentifier:(id)a0 extensionProvider:(id)a1;
- (id)siblingExtensions;
- (void)startExtensionServiceWithInputItems:(id)a0 begin:(id /* block */)a1 completion:(id /* block */)a2;
- (id)startSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1 toObserver:(id)a2;

@end
