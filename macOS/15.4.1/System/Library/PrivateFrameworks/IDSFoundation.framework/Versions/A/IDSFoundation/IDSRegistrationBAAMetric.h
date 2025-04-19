@class NSString, NSDictionary, NSError;

@interface IDSRegistrationBAAMetric : NSObject <CUTCoreAnalyticsMetric, CUTRTCMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1 deviceID:(id)a2;

@end
