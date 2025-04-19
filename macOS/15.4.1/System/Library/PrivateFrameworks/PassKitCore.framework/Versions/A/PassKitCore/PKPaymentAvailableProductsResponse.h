@class NSArray, NSNumber, NSDate;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *availableProducts;
@property (readonly, nonatomic) NSDate *expiry;
@property (readonly, nonatomic) NSNumber *timestamp;

- (void).cxx_destruct;
- (BOOL)supportsSecureCoding;

@end
