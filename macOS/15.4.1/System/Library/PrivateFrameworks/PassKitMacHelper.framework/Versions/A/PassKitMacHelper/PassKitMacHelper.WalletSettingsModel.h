@interface PassKitMacHelper.WalletSettingsModel : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _passes;
    void /* unknown type, empty encoding */ _defaultPass;
    void /* unknown type, empty encoding */ _navigationStackPath;
    void /* unknown type, empty encoding */ _paymentDefaults;
    void /* unknown type, empty encoding */ _hardwareConfigurationModel;
    void /* unknown type, empty encoding */ _contactFormatValidator;
    void /* unknown type, empty encoding */ _orderTrackingEnabled;
    void /* unknown type, empty encoding */ cachedTransactionModelsByUniqueID;
    void /* unknown type, empty encoding */ paymentService;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ publishers;
}

- (void)passLibraryDidChangeWithNotification:(id)a0;
- (void)paymentOptionsDidChange;

@end
