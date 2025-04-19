@class NSString, CMPedestrianFenceManager, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface ULCMPDRFenceProvider : NSObject

@property (retain, nonatomic) CMPedestrianFenceManager *fenceManager;
@property (retain, nonatomic) NSString *fenceIdentifier;
@property (retain, nonatomic) NSString *fenceName;
@property (nonatomic) BOOL isFenceActive;
@property (nonatomic) BOOL isSessionStarted;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSNumber *radius;
@property (copy, nonatomic) id /* block */ onMotionMeasurements;
@property (copy, nonatomic) id /* block */ onStatusReport;
@property (copy, nonatomic) id /* block */ onErrorIndication;

+ (BOOL)_isAvailable;

- (void).cxx_destruct;
- (void)endSession;
- (void)setFenceRadius:(id)a0;
- (void)startSession;
- (void)clearFence;
- (void)_handleFenceCross:(id)a0 error:(id)a1;
- (void)_handleStatusUpdate:(id)a0 withError:(id)a1;
- (void)_handleStatusUpdateError:(id)a0;
- (id)initWithFenceIdentifier:(id)a0 queue:(id)a1 radiusInMeters:(id)a2 callback:(id /* block */)a3 statusCallback:(id /* block */)a4 errorCallback:(id /* block */)a5;
- (void)setFence;

@end
