@class NSString, NSDictionary, CTCarrier;
@protocol CTTelephonyNetworkInfoDelegate;

@interface CTTelephonyNetworkInfo : NSObject

@property (readonly, copy) NSString *dataServiceIdentifier;
@property (weak) id<CTTelephonyNetworkInfoDelegate> delegate;
@property (readonly, retain) NSDictionary *serviceSubscriberCellularProviders;
@property (readonly, retain) CTCarrier *subscriberCellularProvider;
@property (copy, nonatomic) id /* block */ serviceSubscriberCellularProvidersDidUpdateNotifier;
@property (copy, nonatomic) id /* block */ subscriberCellularProviderDidUpdateNotifier;
@property (readonly, retain, nonatomic) NSDictionary *serviceCurrentRadioAccessTechnology;
@property (readonly, retain, nonatomic) NSString *currentRadioAccessTechnology;

- (id)init;
- (void).cxx_destruct;
- (id)radioAccessTechnology;
- (id)serviceCellId;
- (id)serviceSignalStrength;

@end
