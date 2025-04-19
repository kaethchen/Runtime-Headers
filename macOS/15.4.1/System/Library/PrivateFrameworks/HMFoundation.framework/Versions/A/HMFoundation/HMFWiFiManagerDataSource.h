@class NSString, HMFWifiNetworkAssociation, NSNumber;
@protocol HMFWiFiManagerDataSourceDelegate;

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource>

@property (class, readonly, copy, nonatomic) NSString *MACAddressString;

@property (weak, nonatomic) id<HMFWiFiManagerDataSourceDelegate> delegate;
@property (readonly, getter=isAssertionActive) BOOL assertionActive;
@property (readonly) unsigned long long assertionOptions;
@property (nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) BOOL wowAsserted;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (readonly, copy, nonatomic) NSNumber *currentNetworkRSSI;
@property (readonly, nonatomic, getter=isCaptive) BOOL captive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
