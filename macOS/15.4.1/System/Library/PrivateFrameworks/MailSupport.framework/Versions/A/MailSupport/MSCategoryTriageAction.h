@interface MSCategoryTriageAction : MSTriageAction

@property (nonatomic) unsigned long long categoryType;
@property (readonly, nonatomic) unsigned long long changeOptions;

- (BOOL)isUndoSupported;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 categoryType:(unsigned long long)a4 changeOptions:(unsigned long long)a5;

@end
