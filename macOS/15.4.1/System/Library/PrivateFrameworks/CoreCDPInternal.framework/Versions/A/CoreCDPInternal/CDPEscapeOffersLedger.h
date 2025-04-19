@class NSString, NSError;

@interface CDPEscapeOffersLedger : NSObject <CDPRPDLedger> {
    void /* unknown type, empty encoding */ _escapeOffersPresented;
    void /* unknown type, empty encoding */ _manateeRepaired;
    void /* unknown type, empty encoding */ expectedEscapeOffers;
    void /* unknown type, empty encoding */ isWalrusEnabled;
    void /* unknown type, empty encoding */ deviceHasPasscode;
    void /* unknown type, empty encoding */ probationChecker;
    void /* unknown type, empty encoding */ probationDuration;
    void /* unknown type, empty encoding */ recoveryFlowContext;
    void /* unknown type, empty encoding */ deviceIsVM;
    void /* unknown type, empty encoding */ isICDPEnabled;
}

@property (nonatomic, readonly) unsigned long long escapeOffersPresented;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL canOfferEDPRPD;
@property (nonatomic, readonly) NSError *edpRPDBlockingError;
@property (nonatomic, readonly) BOOL canOfferRPD;
@property (nonatomic, readonly) NSError *rpdBlockingError;
@property (nonatomic, readonly) NSError *manateeRPDBlockingError;

- (id)init;
- (void).cxx_destruct;
- (void)insert:(unsigned long long)a0;
- (id)initWithExpectedEscapeOffers:(unsigned long long)a0 recoveryFlowContext:(id)a1 deviceHasPasscode:(BOOL)a2 probationChecker:(id)a3 deviceIsVM:(BOOL)a4 isICDPEnabled:(BOOL)a5;
- (void)satisfyManateeRequirementsForEDPRPD;

@end
