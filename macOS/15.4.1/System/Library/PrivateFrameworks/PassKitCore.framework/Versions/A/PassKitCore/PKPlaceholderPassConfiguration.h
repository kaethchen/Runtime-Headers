@class PKPassAutomaticSelectionCriterion, NSArray, PKAppletSubcredential;

@interface PKPlaceholderPassConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAppletSubcredential *subcredential;
@property (readonly, nonatomic) PKPassAutomaticSelectionCriterion *automaticSelectionCriterion;
@property (readonly, nonatomic) long long paymentApplicationState;
@property (copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSArray *passFields;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubcredential:(id)a0 automaticSelectionCriterion:(id)a1;

@end
