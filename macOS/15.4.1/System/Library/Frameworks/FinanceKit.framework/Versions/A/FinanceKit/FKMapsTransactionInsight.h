@class FKMapsBrand, FKMapsMerchant, NSDate;

@interface FKMapsTransactionInsight : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *updatedAt;
@property (nonatomic) unsigned long long fallbackCategory;
@property (copy, nonatomic) FKMapsMerchant *merchant;
@property (copy, nonatomic) FKMapsBrand *brand;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdatedAt:(id)a0 fallbackCategory:(unsigned long long)a1 merchant:(id)a2 brand:(id)a3;

@end
