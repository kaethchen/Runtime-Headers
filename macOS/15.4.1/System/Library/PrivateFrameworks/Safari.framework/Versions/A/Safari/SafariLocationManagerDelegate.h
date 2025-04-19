@class NSString;

@interface SafariLocationManagerDelegate : NSObject <CLLocationManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateToLocation:(id)a1 fromLocation:(id)a2;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
