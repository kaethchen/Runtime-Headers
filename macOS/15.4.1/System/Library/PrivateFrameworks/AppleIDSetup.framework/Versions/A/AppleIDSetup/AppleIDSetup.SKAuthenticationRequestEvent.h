@interface AppleIDSetup.SKAuthenticationRequestEvent : AppleIDSetup.SKEvent {
    void /* unknown type, empty encoding */ passwordType;
    void /* unknown type, empty encoding */ pairingFlags;
    void /* unknown type, empty encoding */ throttleSeconds;
}

- (id)init;

@end
