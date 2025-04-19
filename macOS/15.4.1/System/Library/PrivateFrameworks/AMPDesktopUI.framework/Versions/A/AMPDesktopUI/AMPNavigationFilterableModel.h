@class AMPNavigationController;

@interface AMPNavigationFilterableModel : AMPFilterableViewModelForwarder

@property (nonatomic) BOOL enableGoBackButton;
@property (weak, nonatomic) AMPNavigationController *owner;

+ (id)keyPathsForValuesAffectingGoBackButtonEnabled;

- (void).cxx_destruct;
- (void)doGoBackAction;
- (BOOL)goBackButtonEnabled;
- (BOOL)optionalGoBackButtonEnabled;

@end
