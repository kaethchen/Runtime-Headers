@class BMOasisAnalyticsSubmapCreatedEvent, NSString, BMOasisAnalyticsSubmapUpdatedEvent, BMOasisAnalyticsSubmapLoadedEvent, BMOasisAnalyticsTrackingStateEvent, BMOasisAnalyticsContextSnapshotEvent, BMOasisAnalyticsRelocalizationSucceededEvent, BMOasisAnalyticsTrackingLostEvent;

@interface BMOasisAnalyticsPerceptionSLAMPayload : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMOasisAnalyticsContextSnapshotEvent *contextSnapshot;
@property (readonly, nonatomic) BMOasisAnalyticsSubmapCreatedEvent *submapCreated;
@property (readonly, nonatomic) BMOasisAnalyticsSubmapUpdatedEvent *submapUpdated;
@property (readonly, nonatomic) BMOasisAnalyticsSubmapLoadedEvent *submapLoaded;
@property (readonly, nonatomic) BMOasisAnalyticsTrackingLostEvent *trackingLost;
@property (readonly, nonatomic) BMOasisAnalyticsTrackingStateEvent *trackingState;
@property (readonly, nonatomic) BMOasisAnalyticsRelocalizationSucceededEvent *relocalizationSucceeded;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithContextSnapshot:(id)a0 submapCreated:(id)a1 submapUpdated:(id)a2 submapLoaded:(id)a3 trackingLost:(id)a4 trackingState:(id)a5 relocalizationSucceeded:(id)a6;

@end
