@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {
    NSMutableSet *_delegateIdentifiers;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _delegateIdentifiersMutex;
}

@property (readonly, nonatomic) BOOL isAwaitingAcknowledgement;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(id /* block */)a0;
- (id)awaitAcknowledgementFromServiceDelegate:(id)a0;
- (id)identifierForServiceDelegate:(id)a0;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)a0;

@end
