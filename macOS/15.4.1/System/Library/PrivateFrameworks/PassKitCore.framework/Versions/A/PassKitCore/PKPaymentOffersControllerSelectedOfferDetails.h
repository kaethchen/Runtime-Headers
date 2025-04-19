@class NSString, NSMutableArray, PKSelectedPaymentOffer;

@interface PKPaymentOffersControllerSelectedOfferDetails : NSObject

@property (retain, nonatomic) NSMutableArray *selectedOfferHistory;
@property (readonly, nonatomic) PKSelectedPaymentOffer *selectedPaymentOffer;
@property (readonly, nonatomic) PKSelectedPaymentOffer *previouslySelectedOffer;
@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, nonatomic) NSString *selectedPassUniqueID;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearCurrentSelectedPaymentOfferDetails;
- (BOOL)hasSelectedOtherOffersAfterPreconfiguredInstallmentOffer;
- (BOOL)requiresUserAction;
- (BOOL)updateCurrentSelectedPaymentOffer:(id)a0 selectedPassUniqueID:(id)a1 updateReason:(unsigned long long)a2;
- (BOOL)updatedSelectedOfferContents;
- (void)updatedSelectedPassUniqueID:(id)a0;

@end
