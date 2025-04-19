@class NSString, NSArray, NSMapTable;

@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate> {
    NSArray *_observables;
    NSMapTable *_tokensByObserver;
    BOOL _winnerDeclared;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (void)cancelRemainingObservables;
- (id)initWithObservables:(id)a0;
- (void)observerWillRelayEvent:(id)a0;

@end
