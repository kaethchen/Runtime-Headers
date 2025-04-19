@class NSString, NSArray, NSError, ADDESRecordsManager;

@interface ADSearchObject : NSObject

@property (retain, nonatomic) NSString *sponsoredSearchRequestData;
@property (retain, nonatomic) NSString *routingInfoData;
@property (retain, nonatomic) NSString *deviceRequestID;
@property (retain, nonatomic) NSString *userTargetingID;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) ADDESRecordsManager *desRecordManager;
@property (retain, nonatomic) NSArray *advertisements;
@property (retain, nonatomic) NSArray *organics;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkForNonWKDiscardOverrides:(BOOL)a0 forAdamID:(id)a1;
- (id)filterAdsForNonWK:(id)a0;
- (id)initWithSponsoredSearchRequestData:(id)a0 routingInfoData:(id)a1 deviceRequestID:(id)a2 userTargetingID:(id)a3 error:(id)a4;
- (void)orderedAds:(id /* block */)a0;
- (void)orderedAdsWithODMLSuccess:(id /* block */)a0;
- (id)updatedWithTransparencyRenderingData:(id)a0;

@end
