@class SCDAAssertionCoordinator, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAPowerAssertionManager : NSObject <SCDAAssertionCoordinatorDelegate> {
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    SCDAAssertionCoordinator *_assertionCoordinator;
    unsigned int _powerAssertion;
    NSMutableDictionary *_assertionsByName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_releasePowerAssertion;
- (void)_createPowerAssertion;
- (void)assertionCoordinator:(id)a0 didActivateAssertion:(id)a1 isFirstAssertion:(BOOL)a2;
- (void)assertionCoordinator:(id)a0 didAddAssertion:(id)a1 isFirstAssertion:(BOOL)a2;
- (void)assertionCoordinator:(id)a0 didDeactivateAssertion:(id)a1 isLastAssertion:(BOOL)a2;
- (void)assertionCoordinator:(id)a0 didRemoveAssertion:(id)a1 isLastAssertion:(BOOL)a2;
- (void)releaseAllPowerAssertions;
- (void)releasePowerAssertionWithName:(id)a0;
- (void)takePowerAssertionWithName:(id)a0;

@end
