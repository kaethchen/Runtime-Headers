@class NSString;
@protocol LACDTOLocationProvider, LACDTOFeatureControlling;

@interface LACDTOLocationProviderModeDecorator : NSObject <LACDTOLocationProvider> {
    id<LACDTOLocationProvider> _locationProvider;
    id<LACDTOFeatureControlling> _featureController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
