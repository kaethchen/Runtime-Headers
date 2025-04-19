@interface CDPUIEDPRecoveryTokenFlowEventReporter : NSObject

+ (void)sendDontHaveKeyAlertPresentedEventIncludingRPD:(BOOL)a0 context:(id)a1;
+ (void)sendIntroViewAppearedEventWithContext:(id)a0 showCancel:(BOOL)a1;
+ (void)sendIntroViewEscapeOfferSelectedEventForOffer:(id)a0 context:(id)a1;
+ (void)sendTokenEntryEscapeOfferSelectedEventForOffer:(id)a0 context:(id)a1;
+ (void)sendTokenEntryViewAppearedEventWithContext:(id)a0;

@end
