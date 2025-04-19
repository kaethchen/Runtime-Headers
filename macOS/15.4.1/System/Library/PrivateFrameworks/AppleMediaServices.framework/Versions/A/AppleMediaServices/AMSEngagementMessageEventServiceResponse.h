@class NSString, NSDictionary, AMSEngagementMessageRequest, AMSEngagementRequest;

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain) NSDictionary *dictionaryRepresentation;
@property (retain) AMSEngagementRequest *engagementRequest;
@property (retain) AMSEngagementMessageRequest *fullScreenMessageRequest;
@property (retain) NSDictionary *placementsMap;
@property (retain) NSString *serviceType;
@property (retain) NSDictionary *placements;

- (void).cxx_destruct;
- (id)_placementRequestsWithDictionary:(id)a0;
- (id)_placementsMapWithPayload:(id)a0;
- (void)_preprocessMessageRequest:(id)a0 placement:(id)a1;
- (id)exportObject;
- (id)initWithJSObject:(id)a0;

@end
