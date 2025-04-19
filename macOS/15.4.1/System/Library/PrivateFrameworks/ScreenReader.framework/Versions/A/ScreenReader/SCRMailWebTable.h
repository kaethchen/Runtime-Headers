@protocol SCRLocaleInfoProviding;

@interface SCRMailWebTable : SCRWebTable

@property (retain, nonatomic) id<SCRLocaleInfoProviding> _currentLocale;

- (void).cxx_destruct;
- (BOOL)requiresInteraction;
- (void)handleBoundaryWithDirection:(long long)a0 cell:(struct SCRDataCell { unsigned long long x0; unsigned long long x1; })a1 outputRequest:(id)a2 event:(id)a3;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1 currentLocale:(id)a2;

@end
