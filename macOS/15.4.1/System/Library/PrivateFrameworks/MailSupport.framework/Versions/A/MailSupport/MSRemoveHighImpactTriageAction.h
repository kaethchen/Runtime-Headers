@interface MSRemoveHighImpactTriageAction : MSTriageAction

@property (nonatomic) unsigned long long highImpactChange;

- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 highImpactChange:(unsigned long long)a4;

@end
