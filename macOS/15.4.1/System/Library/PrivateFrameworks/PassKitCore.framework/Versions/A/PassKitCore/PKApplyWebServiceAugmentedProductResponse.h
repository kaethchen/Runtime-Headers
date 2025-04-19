@class PKPaymentSetupProduct;

@interface PKApplyWebServiceAugmentedProductResponse : PKApplyWebServiceResponse {
    PKPaymentSetupProduct *_product;
}

@property (readonly, copy, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_generateProduct;

@end
