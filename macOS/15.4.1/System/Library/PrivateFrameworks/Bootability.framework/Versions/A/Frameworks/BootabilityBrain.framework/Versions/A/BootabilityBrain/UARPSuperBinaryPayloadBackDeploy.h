@class UARPAssetTagBackDeploy, NSData, NSString, NSMutableDictionary, UARPAssetVersionBackDeploy, NSMutableString, NSMutableArray, FTABFileBackDeploy, NSNumber;

@interface UARPSuperBinaryPayloadBackDeploy : NSObject {
    FTABFileBackDeploy *_ftab;
    NSMutableString *_keyManifest;
    unsigned long long _uinitNumber;
    NSString *_ticketPrefix;
    BOOL _ticketNeedsUnitNumber;
    BOOL _suffixNeedsUnitNumber;
    BOOL _prefixNeedsUnitNumber;
    NSMutableArray *_trimmedTlvs;
    NSMutableArray *_subfiles;
}

@property (readonly) UARPAssetTagBackDeploy *tag;
@property (readonly) UARPAssetVersionBackDeploy *version;
@property (readonly) NSMutableArray *tlvs;
@property (readonly) NSData *payloadData;
@property (readonly) NSData *metaData;
@property (readonly) BOOL needsHostPersonalization;
@property (retain) NSData *manifest;
@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecID;
@property (retain) NSData *nonce;
@property unsigned char productionMode;
@property unsigned char securityDomain;
@property unsigned char securityMode;
@property (retain) NSNumber *trustedOverride;
@property (retain) NSNumber *demote;
@property (readonly) NSMutableDictionary *tssRequest;
@property (readonly) NSMutableArray *measurements;

- (id)description;
- (void).cxx_destruct;
- (void)addSubfile:(id)a0 tag:(id)a1;
- (id)getMeasurements;
- (id)getTlvs;
- (id)composeTSSRequest:(unsigned long long)a0;
- (id)composeTSSRequest:(unsigned long long)a0 asMeasurement:(BOOL)a1;
- (BOOL)expandTLVs;
- (id)getManifest;
- (BOOL)getNeedsHostPersonalization;
- (id)getTssRequest;
- (id)initWithData:(id)a0 metaData:(id)a1 tag:(id)a2 version:(id)a3;
- (id)personalizedData;
- (id)personalizedMetaData;
- (void)processMeasurementsForTSSOptions:(id)a0 unitNumber:(unsigned long long)a1 asMeasurement:(BOOL)a2;
- (void)processTLVsForPersonalization;
- (BOOL)queryTatsuSigningServer:(id)a0 ssoOnly:(BOOL)a1 error:(id *)a2;
- (void)removeSubfile:(id)a0 tag:(id)a1;
- (id)requiredTSSOptions;
- (id)tatsuMeasurements:(unsigned long long)a0;
- (id)tssKeyName:(id)a0 unitNumber:(unsigned long long)a1;
- (id)tssRequestAsString;

@end
