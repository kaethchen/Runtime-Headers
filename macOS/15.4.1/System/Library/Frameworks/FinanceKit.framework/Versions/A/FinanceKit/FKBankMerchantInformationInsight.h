@class NSString, CNPostalAddress, NSNumber;

@interface FKBankMerchantInformationInsight : NSObject <NSCopying>

@property (copy, nonatomic) NSString *categoryDescription;
@property (copy, nonatomic) CNPostalAddress *merchantAddress;
@property (copy, nonatomic) NSNumber *merchantCategoryCode;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantNumber;
@property (copy, nonatomic) NSString *standardIndustrialClassificationCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategoryDescription:(id)a0 merchantAddress:(id)a1 merchantCategoryCode:(id)a2 merchantName:(id)a3 merchantNumber:(id)a4 standardIndustrialClassificationCode:(id)a5;

@end
