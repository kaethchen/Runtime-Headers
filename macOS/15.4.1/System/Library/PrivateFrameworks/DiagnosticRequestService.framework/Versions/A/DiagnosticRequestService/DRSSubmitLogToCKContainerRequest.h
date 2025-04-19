@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (id)entityName;
+ (Class)_moClass;
+ (BOOL)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)a0;
+ (id)safeguardArchiveZoneID;
+ (id)xcRecordZoneID;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)zoneID;
- (id)requestType;
- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;
- (unsigned long long)expectedType;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)recordRepresentation;
- (id)targetContainerName;

@end
