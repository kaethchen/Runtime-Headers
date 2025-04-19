@interface WiFiSettingsKit.PasswordSharingInterface : _TtCs12_SwiftObject <SFPasswordSharingServiceDelegate> {
    void /* unknown type, empty encoding */ passwordService;
    void /* unknown type, empty encoding */ passwordReceivedPublisher;
    void /* unknown type, empty encoding */ supportedSecurityTypes;
    void /* unknown type, empty encoding */ networkName;
    void /* unknown type, empty encoding */ receivedPassword;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ securityType;
}

- (void)service:(id)a0 receivedNetworkInfo:(id)a1;

@end
