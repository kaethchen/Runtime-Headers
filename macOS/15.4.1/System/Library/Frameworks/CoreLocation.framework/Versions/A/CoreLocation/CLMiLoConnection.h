@class CLMiLoConnectionInternal;
@protocol CLMiLoConnectionDelegate;

@interface CLMiLoConnection : NSObject

@property (readonly, nonatomic) CLMiLoConnectionInternal *_internal;
@property (nonatomic) id<CLMiLoConnectionDelegate> delegate;

- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)queryMyServices;
- (void)connectServiceWithIdentifier:(id)a0;
- (id)createCustomLocationOfInterestAtCurrentLocation;
- (void)createServiceWithServiceType:(unsigned long long)a0 locationTypes:(id)a1;
- (void)deleteServiceWithIdentifier:(id)a0;
- (void)disconnectServiceWithIdentifier:(id)a0;
- (id)labelEventWithRequestIdentifier:(id)a0 withPlaceIdentifier:(id)a1;
- (id)labelEventsWithStartDate:(id)a0 endDate:(id)a1 placeIdentifier:(id)a2;
- (id)labelObservationWithRequestIdentifier:(id)a0 withPlaceIdentifier:(id)a1;
- (id)labelObservationsWithStartDate:(id)a0 endDate:(id)a1 placeIdentifier:(id)a2;
- (id)purgeAllMiLoData;
- (void)queryMiLoConnectionStatus;
- (id)removeCustomLocationOfInterestWithIdentifier:(id)a0;
- (id)removeLabels:(id)a0;
- (id)requestExportDatabase;
- (id)requestMiLoPrediction;
- (id)requestModelLearning;
- (id)requestObservation:(id)a0;
- (id)startUpdatingMicroLocationWithConfiguration:(id)a0;
- (id)stopUpdatingMicroLocation;

@end
