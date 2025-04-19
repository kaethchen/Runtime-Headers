@class NSDecimalNumber, NSString, NSSet, NSNumber;

@interface FinanceKit.ManagedApplePayMerchantTokenPastPayment : NSManagedObject

@property (nonatomic) short decodingIndex;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *lineItemObjects;
@property (nonatomic, retain) NSSet *summaryItemObjects;
@property (nonatomic, retain) NSDecimalNumber *totalAmountValue;
@property (nonatomic, copy) NSString *totalAmountCurrencyCode;
@property (nonatomic) short paymentYear;
@property (nonatomic) short paymentMonth;
@property (nonatomic) short paymentDay;
@property (nonatomic, retain) NSNumber *paymentHour;
@property (nonatomic, retain) NSNumber *paymentMinute;
@property (nonatomic, retain) NSNumber *paymentSecond;
@property (nonatomic, retain) NSNumber *paymentTimeZoneSecondsFromGMT;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
