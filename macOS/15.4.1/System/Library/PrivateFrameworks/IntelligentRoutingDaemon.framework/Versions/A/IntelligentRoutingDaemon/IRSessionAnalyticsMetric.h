@class NSString, NSNumber, NSDictionary;

@interface IRSessionAnalyticsMetric : NSObject <CUTCoreAnalyticsMetric>

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *internalAppName;
@property (retain, nonatomic) NSNumber *eventType;
@property (retain, nonatomic) NSNumber *miloAvailable;
@property (retain, nonatomic) NSString *bannerCandidateType;
@property (retain, nonatomic) NSString *bannerCandidateModelType;
@property (retain, nonatomic) NSString *chosenCandidateType;
@property (retain, nonatomic) NSString *chosenCandidateModelType;
@property (retain, nonatomic) NSNumber *postBannerInteraction;
@property (retain, nonatomic) NSNumber *isOutsideApp;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 internalAppName:(id)a1 eventType:(id)a2 miloAvailable:(id)a3 bannerCandidateType:(id)a4 bannerCandidateModelType:(id)a5 chosenCandidateType:(id)a6 chosenCandidateModelType:(id)a7 postBannerInteraction:(id)a8 isOutsideApp:(id)a9;

@end
