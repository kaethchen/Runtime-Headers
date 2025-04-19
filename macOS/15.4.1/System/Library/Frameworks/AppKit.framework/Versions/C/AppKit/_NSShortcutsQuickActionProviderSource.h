@class NSSet, NSString, _NSQuickActionPresentation;

@interface _NSShortcutsQuickActionProviderSource : NSObject <_NSQuickActionProviderSource> {
    _NSQuickActionPresentation *_presentation;
    NSSet *_availableQuickActions;
}

@property (readonly, copy) NSSet *quickActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfQuickActions;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPresentation:(id)a0;

@end
