@class NSString;
@protocol CNUIShareKitTransitionProvider;

@interface ABActionEmailSendUpdate : NSObject <ABActionDelegate, NSSharingServiceDelegate>

@property (retain) id<CNUIShareKitTransitionProvider> transitionProvider;
@property (readonly) NSString *actionProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1 transitionProvider:(id)a2;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
