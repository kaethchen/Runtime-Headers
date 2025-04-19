@class NSNumber, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_shiftingEnabled;
    NSNumber *_shiftingFxnVersion;
    NSCache *_shiftFunctionCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })a0;
- (BOOL)_isLocationShiftRequiredForCoordinateInProcess:(struct { double x0; double x1; })a0;
- (BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(struct { double x0; double x1; })a0;
- (BOOL)_isLocationShiftRequiredForRegionInProcess:(id)a0;
- (BOOL)_isLocationShiftRequiredForRegionViaProxy:(id)a0;
- (void)fetchCachedShiftFunctionResponseForLocation:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)flushDiskCache;
- (void)getAllShiftEntries:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (BOOL)isLocationShiftEnabled;
- (BOOL)isLocationShiftRequiredForRegion:(id)a0;
- (unsigned int)locationShiftFunctionVersion;
- (void)pruneDiskCache;
- (void)shiftLatLng:(id)a0 auditToken:(id)a1 completionHandler:(id /* block */)a2;

@end
