@class NSNumber, NSDictionary, NSString;

@interface IDSOffTheGridModeMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *previousMode;
@property (readonly, nonatomic) NSNumber *currentMode;
@property (readonly, nonatomic) NSNumber *previousPublishStatus;
@property (readonly, nonatomic) NSNumber *currentPublishStatus;
@property (readonly, nonatomic) BOOL previousStewieConnectionState;
@property (readonly, nonatomic) BOOL currentStewieConnectionState;
@property (readonly, nonatomic) BOOL previousNetworkConnectionState;
@property (readonly, nonatomic) BOOL currentNetworkConnectionState;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPreviousMode:(id)a0 currentMode:(id)a1 previousPublishStatus:(id)a2 currentPublishStatus:(id)a3 previousStewieConnectionState:(BOOL)a4 currentStewieConnectionState:(BOOL)a5 previousNetworkConnectionState:(BOOL)a6 currentNetworkConnectionState:(BOOL)a7 duration:(id)a8;

@end
