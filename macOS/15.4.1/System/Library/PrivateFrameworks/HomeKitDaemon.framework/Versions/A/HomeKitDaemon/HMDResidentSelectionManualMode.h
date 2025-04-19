@interface HMDResidentSelectionManualMode : HMDResidentSelectionMode

+ (id)logCategory;

- (id)initWithContext:(id)a0;
- (id)shortDescription;
- (id)logIdentifier;
- (unsigned long long)currentModeType;
- (void)performSelectionWithPreferredPrimaryResident:(id)a0 requireAutoUpdate:(BOOL)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;

@end
