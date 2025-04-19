@class CRKClassKitCurrentUserProvider;

@interface CRKPersonaMatchEnforcingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) long long modifiedAccountState;

+ (id)keyPathsForValuesAffectingAccountState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)accountState;
- (id)initWithClassKitFacade:(id)a0;
- (BOOL)isPersonaEligible;
- (long long)nextAccountState;
- (void)updateAccountState;

@end
