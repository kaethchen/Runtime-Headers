@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) PKAppleAccountState *currentState;
@property (readonly, nonatomic) PKAppleAccountState *previousState;

+ (long long)changeTypeToAccount:(id)a0 fromAccount:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)didAccountManagedStateChange;
- (BOOL)didAccountOrderChange;
- (BOOL)didEnablementOfRelevantDataclassesChange;
- (BOOL)didEnablementOfUbiquityDataclassChange;
- (BOOL)didEnablementOfWalletDataclassChange;
- (id)initWithEvent:(long long)a0 currentAccount:(id)a1 previousAccount:(id)a2;
- (BOOL)shouldBeNotedByPassLibrary;

@end
