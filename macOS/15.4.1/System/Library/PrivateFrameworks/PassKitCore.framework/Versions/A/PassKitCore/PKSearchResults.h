@class NSArray;

@interface PKSearchResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *suggestedAutocompleteTokens;
@property (copy, nonatomic) NSArray *paymentPassResults;
@property (copy, nonatomic) NSArray *barcodePassResults;
@property (copy, nonatomic) NSArray *categoryResults;
@property (copy, nonatomic) NSArray *merchantResults;
@property (copy, nonatomic) NSArray *transactionResults;
@property (copy, nonatomic) NSArray *personResults;
@property (copy, nonatomic) NSArray *locationResults;
@property (copy, nonatomic) NSArray *transactionTagResults;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
