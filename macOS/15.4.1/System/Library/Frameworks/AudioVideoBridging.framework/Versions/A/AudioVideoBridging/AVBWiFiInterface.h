@class IOKService, IOKInterestNotification;

@interface AVBWiFiInterface : AVBInterface {
    IOKService *_wifiController;
    IOKInterestNotification *_interestNotification;
}

+ (id)supportedInterfaces;
+ (id)allInterfaces;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;
+ (id)iokitMatchingDictionaryForNetworkController;

- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (unsigned long long)linkSpeed;
- (unsigned long long)currentLinkBandwidth;
- (unsigned long long)maximumLinkBandwidth;

@end
