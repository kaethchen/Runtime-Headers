@class NSString, HMFFuture, CLLocation, HMFPromise;

@interface HMDResidentLocationProvider : HMFObject <HMDLocationDelegate, HMDResidentLocationProvider>

@property (readonly, nonatomic) HMFPromise *residentLocationUpdatedPromise;
@property (retain, nonatomic) HMFFuture *locationUpdatedFuture;
@property (retain) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didDetermineLocation:(id)a0;
- (void)requestResidentLocation;

@end
