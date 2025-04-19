@class NSMutableArray;

@interface MechanismKofN : MechanismBaseComposite {
    NSMutableArray *_runningMechanisms;
    BOOL _finishing;
}

@property (readonly, nonatomic, getter=isSerial) BOOL serial;

+ (id)mechanismWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3;
+ (id)mechanismWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3 preserveStandaloneReorganizers:(BOOL)a4;

- (void).cxx_destruct;
- (void)setParent:(id)a0;
- (void)_runSubmechanismAtIndex:(long long)a0 hints:(id)a1 eventsDelegate:(id)a2 succeeded:(long long)a3 failed:(long long)a4 results:(id)a5 reply:(id /* block */)a6;
- (id)additionalControllerInternalInfoForPolicy:(long long)a0;
- (id)availabilityEventsForPurpose:(long long)a0;
- (id)bestEffortAvailableMechanismForRequest:(id)a0 error:(id *)a1;
- (id)cachedExternalizationDelegate;
- (id)descriptionFlags;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (id)initWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3;
- (id)mechanismPruningMechanismsWithEventIdentifier:(long long)a0;
- (id)mechanismTreeDescription;
- (BOOL)pause:(BOOL)a0 forEvent:(long long)a1 error:(id *)a2;
- (BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)a0;
- (BOOL)requiresUiWithEventProcessing:(id)a0;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;

@end
