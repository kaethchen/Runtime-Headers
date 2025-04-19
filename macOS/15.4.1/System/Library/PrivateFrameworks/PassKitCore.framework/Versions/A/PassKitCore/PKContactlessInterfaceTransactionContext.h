@class PKTransitAppletHistory, NSString, NSArray, NSDate, PKFelicaAppletHistory, PKPaymentTransaction, PKExpressTransactionState, PKPaymentApplication, PKPaymentPass;

@interface PKContactlessInterfaceTransactionContext : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic, getter=isIncompatible) BOOL incompatible;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) NSArray *activatedPaymentApplications;
@property (retain, nonatomic) NSString *appletIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSArray *valueAddedServicePasses;
@property (retain, nonatomic) NSArray *valueAddedServiceTransactions;
@property (retain, nonatomic) PKTransitAppletHistory *transitHistory;
@property (readonly, nonatomic) PKFelicaAppletHistory *felicaHistory;
@property (retain, nonatomic) PKExpressTransactionState *expressState;

- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 activatedPaymentApplications:(id)a1;

@end
