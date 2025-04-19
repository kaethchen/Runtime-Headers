@class NSString, GEOPBTransitPaymentMethod;

@interface GEOTransitPaymentMethod : NSObject <NSCopying> {
    GEOPBTransitPaymentMethod *_pbPaymentMethod;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) int paymentMethodType;
@property (readonly, nonatomic) int addValueNameType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentMethod:(id)a0;

@end
