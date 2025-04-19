@interface CLSClassificationInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (double)_confidenceForCount:(unsigned long long)a0 mu:(double)a1 sigma:(double)a2;
- (id)_gatherSceneCluesForInvestigation:(id)a0 signalModelProviderBlock:(id /* block */)a1 informantKey:(id)a2 progressBlock:(id /* block */)a3;
- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
