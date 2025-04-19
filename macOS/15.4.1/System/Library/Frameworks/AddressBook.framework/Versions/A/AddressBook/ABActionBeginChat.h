@class NSString;
@protocol CNUIShareKitTransitionProvider;

@interface ABActionBeginChat : NSObject <NSSharingServiceDelegate, ABActionDelegate> {
    NSString *_actionProperty;
}

@property (retain) id<CNUIShareKitTransitionProvider> transitionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *actionProperty;

- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1 transitionProvider:(id)a2;
- (void)setActionProperty:(id)a0;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
