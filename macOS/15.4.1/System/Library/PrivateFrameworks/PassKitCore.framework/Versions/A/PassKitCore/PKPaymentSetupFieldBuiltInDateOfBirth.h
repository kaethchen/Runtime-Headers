@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;
@property (nonatomic) BOOL disallowCurrentYear;

- (BOOL)isBuiltIn;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)submissionStringMeetsAllRequirements;

@end
