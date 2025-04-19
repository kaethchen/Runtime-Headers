@class IOKService, IOKInterestNotification;

@interface AVBEthernetInterface : AVBInterface {
    IOKService *_ethernetController;
    IOKInterestNotification *_controllerInterestNotification;
    IOKService *_ethernetInterface;
    IOKInterestNotification *_interfaceInterestNotification;
}

+ (id)supportedInterfaces;
+ (id)allInterfaces;
+ (id)iokitMatchingDictionaryForAnyInterface;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;
+ (id)iokitMatchingDictionaryForNetworkController;
+ (id)macAddressForInterfaceNamed:(id)a0;

- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (unsigned long long)linkSpeed;
- (BOOL)hiddenInterface;
- (unsigned long long)currentLinkBandwidth;
- (BOOL)linkActive;
- (unsigned long long)maximumLinkBandwidth;

@end
