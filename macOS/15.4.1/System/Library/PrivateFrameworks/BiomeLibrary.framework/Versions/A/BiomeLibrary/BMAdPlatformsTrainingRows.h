@class NSString, NSArray, NSData;

@interface BMAdPlatformsTrainingRows : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) BOOL impressed;
@property (nonatomic) BOOL hasImpressed;
@property (readonly, nonatomic) BOOL tapped;
@property (nonatomic) BOOL hasTapped;
@property (readonly, nonatomic) BOOL dupe;
@property (nonatomic) BOOL hasDupe;
@property (readonly, nonatomic) BOOL installed;
@property (nonatomic) BOOL hasInstalled;
@property (readonly, nonatomic) double errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSArray *appUsageVector;
@property (readonly, nonatomic) NSArray *appDownloadVector;
@property (readonly, nonatomic) NSArray *installedAppVector;
@property (readonly, nonatomic) NSArray *userQueryVector;
@property (readonly, nonatomic) NSData *serverResponse;
@property (readonly, nonatomic) NSString *recordID;
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
- (id)_appDownloadVectorJSONArray;
- (id)_appUsageVectorJSONArray;
- (id)_installedAppVectorJSONArray;
- (id)_userQueryVectorJSONArray;
- (id)initWithDeploymentID:(id)a0 experimentID:(id)a1 treatmentID:(id)a2 adamID:(id)a3 impressed:(id)a4 tapped:(id)a5 dupe:(id)a6 installed:(id)a7 errorCode:(id)a8 appUsageVector:(id)a9 appDownloadVector:(id)a10 installedAppVector:(id)a11 userQueryVector:(id)a12 serverResponse:(id)a13 recordID:(id)a14;

@end
