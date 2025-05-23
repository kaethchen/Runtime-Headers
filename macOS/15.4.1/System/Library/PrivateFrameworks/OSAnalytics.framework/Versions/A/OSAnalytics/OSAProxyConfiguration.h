@class NSString, NSDictionary;

@interface OSAProxyConfiguration : NSObject {
    NSString *_productBuildString;
    NSString *_productReleaseString;
    NSString *_serialNumber;
}

@property (readonly) NSString *logPath;
@property (readonly) NSString *identifier;
@property (readonly) BOOL isProxy;
@property (readonly) BOOL isInternalBridge;
@property (readonly) NSString *modelCode;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) NSString *osTrain;
@property (readonly) NSString *productName;
@property (readonly) NSString *productNameVersionBuildString;
@property (readonly) NSString *targetAudience;
@property (readonly) NSString *uiCountryCode;
@property (readonly) NSString *systemId;
@property (readonly) NSString *internalKey;
@property (readonly) NSString *crashReporterKey;
@property (readonly) NSString *awdReporterKey;
@property (readonly) NSString *releaseType;
@property (readonly) NSString *seedGroup;
@property (readonly) NSString *experimentGroup;
@property (readonly) NSString *automatedDeviceGroup;
@property (readonly) NSString *automatedContextURL;
@property (readonly, nonatomic) BOOL isComputeController;
@property (readonly, nonatomic) BOOL isComputeNode;
@property (readonly) NSDictionary *currentTaskingIDByRouting;

- (id)description;
- (void).cxx_destruct;
- (id)initFromPath:(id)a0;
- (id)metadata;
- (id)assembleMetadataAt:(double)a0 withOptions:(unsigned int)a1;
- (id)init:(id)a0 fromMetadata:(id)a1;
- (BOOL)isConfigEnabled:(id)a0;
- (BOOL)isFile:(id)a0 validForSubmission:(id)a1 reasonableSize:(long long)a2 to:(id)a3 internalTypes:(id)a4 result:(const char **)a5;
- (BOOL)usesLegacySubmission:(id)a0;

@end
