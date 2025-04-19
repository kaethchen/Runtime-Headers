@class NSDictionary, CHSChronoServicesConnection, NSSet, CHSWidgetExtensionSet, NSString, NSHashTable, CHSWidgetExtensionProviderOptions;
@protocol CHSIconResolving, BSInvalidatable;

@interface CHSWidgetExtensionProvider : NSObject <BSDescriptionProviding, CHSChronoServicesConnectionClient, BSInvalidatable> {
    id<CHSIconResolving> _iconResolver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CHSWidgetExtensionSet *_lock_extensionSet;
    id<BSInvalidatable> _lock_subscription;
    BOOL _lock_invalidated;
    CHSWidgetExtensionProviderOptions *_lock_providerOptions;
    NSHashTable *_lock_observers;
    NSDictionary *_lock_iconVersionByExtensionIdentity;
}

@property (readonly, nonatomic) CHSWidgetExtensionSet *_widgetExtensionSet;
@property (retain, nonatomic) CHSChronoServicesConnection *connection;
@property (copy, nonatomic) id /* block */ eduModeProvider;
@property (readonly, nonatomic) NSSet *containers;
@property (readonly, nonatomic) NSSet *extensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_computeIconVersionsByForExtensions:(id)a0 withIconResolver:(id)a1;
+ (id)_makeWidgetExtensionSetWithExtensions:(id)a0 iconResolver:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithOptions:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (BOOL)_isEDUMode;
- (void)_lock_loadContentInitiallySynchronouslyIfNecessary;
- (void)_lock_notifyObserversExtensionsDidChange;
- (void)_lock_widgetExtensionsDidChange:(id)a0 postNotification:(BOOL)a1 reason:(id)a2;
- (id)controlDescriptorForControl:(id)a0;
- (id)controlDescriptorForIdentifiable:(id)a0;
- (id)initIncludingIntents:(BOOL)a0;
- (id)initWithConnection:(id)a0 providerOptions:(id)a1 eduProvider:(id /* block */)a2;
- (id)widgetDescriptorForIdentifiable:(id)a0;
- (id)widgetDescriptorForWidget:(id)a0;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)a0;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)a0;
- (void)widgetExtensionsDidChange:(id)a0;

@end
