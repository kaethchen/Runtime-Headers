@class _NSShortcutsQuickActionProviderSource, NSArray, NSSet, _NSQuickActionPresentation, _NSLegacyServiceQuickActionProviderSource, _NSExtensionQuickActionProviderSource;
@protocol _NSQuickActionProviderObserver;

@interface _NSQuickActionProvider : NSObject {
    id<_NSQuickActionProviderObserver> _observer;
    _NSQuickActionPresentation *_presentation;
    _NSLegacyServiceQuickActionProviderSource *_legacyServiceSource;
    _NSExtensionQuickActionProviderSource *_extensionSource;
    _NSShortcutsQuickActionProviderSource *_shortcutsSource;
    BOOL _isObservingSources;
    BOOL _isObservingConfiguration;
}

@property (readonly) NSArray *allOrderedQuickActions;
@property (readonly) NSArray *activeOrderedQuickActions;
@property (readonly) NSSet *allQuickActions;
@property (readonly) NSSet *activeQuickActions;

+ (id)providerWithObserver:(id)a0 presentationMode:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)beginConfiguration;
- (void)configurationDidChange:(id)a0;
- (id)initWithObserver:(id)a0 presentation:(id)a1;

@end
