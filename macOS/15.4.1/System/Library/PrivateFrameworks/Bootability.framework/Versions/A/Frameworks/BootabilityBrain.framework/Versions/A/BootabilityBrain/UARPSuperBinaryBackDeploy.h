@class NSData, NSString, NSMutableDictionary, NSMutableString, UARPAssetVersionBackDeploy, NSObject, NSMutableArray, NSNumber;
@protocol UARPSuperBinaryDelegate, OS_dispatch_queue;

@interface UARPSuperBinaryBackDeploy : NSObject {
    id<UARPSuperBinaryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct uarpPlatformAsset { struct UARPSuperBinaryHeader { unsigned int x0; unsigned int x1; unsigned int x2; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x0; unsigned short x1; unsigned short x2; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x3; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x4; unsigned int x5; unsigned char x6; unsigned char x7; struct uarpPlatformAssetCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; } x8; int x9; struct uarpDataRequestObj { unsigned int x0; unsigned int x1; unsigned int x2; char *x3; unsigned int x4; char *x5; unsigned int x6; unsigned char x7; struct UARPCompressedHeader { unsigned short x0; unsigned int x1; unsigned short x2; unsigned short x3; } x8; unsigned int x9; void /* function */ *x10; void /* function */ *x11; unsigned char x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; int x18; unsigned int x19; char *x20; unsigned int x21; char *x22; } x10; int x11; int x12; int x13; unsigned char x14; struct uarpPayloadObj { struct UARPPayloadHeader2 { unsigned int x0; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x0; unsigned char x1; unsigned int x2; unsigned int x3; unsigned char x4; int x5; char *x6; unsigned int x7; int x8; char *x9; unsigned int x10; char *x11; unsigned int x12; char *x13; unsigned int x14; int x15; unsigned int x16; void *x17; unsigned int x18; unsigned char x19; void *x20; unsigned int x21; } x15; struct uarpProcessedPayloadObj *x16; char *x17; unsigned int x18; unsigned char x19; char *x20; unsigned int x21; unsigned char x22; char *x23; unsigned int x24; unsigned int x25; unsigned int x26; struct uarpPlatformRemoteEndpoint *x27; void *x28; struct uarpPlatformAsset *x29; struct uarpProcessedTLV *x30; } *_asset;
    NSData *_data;
    unsigned int _formatVersion;
    UARPAssetVersionBackDeploy *_version;
    NSData *_metaData;
    NSMutableArray *_trimmedTlvs;
    NSMutableDictionary *_tatsuMeasurements;
    NSData *_manifest;
    NSMutableDictionary *_tssRequest;
    NSMutableString *_keyManifest;
    NSString *_ticketPrefix;
    NSString *_ticketSuffix;
    BOOL _ticketNeedsUnitNumber;
    BOOL _prefixNeedsUnitNumber;
    BOOL _suffixNeedsUnitNumber;
    NSMutableArray *_measurements;
}

@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecID;
@property (retain) NSData *ecidData;
@property (retain) NSData *nonce;
@property unsigned char productionMode;
@property unsigned char securityDomain;
@property unsigned char securityMode;
@property unsigned char life;
@property BOOL provisioning;
@property unsigned char manifestEpoch;
@property (retain) NSNumber *trustedOverride;
@property (retain) NSNumber *demote;
@property (readonly) BOOL needsHostPersonalization;
@property (readonly) NSMutableArray *tlvs;
@property (readonly) NSMutableArray *payloads;
@property void *layer2Context;
@property (readonly) unsigned long long totalLength;
@property (readonly) unsigned long long totalBytesRequested;

- (void).cxx_destruct;
- (void)log:(id)a0;
- (BOOL)expandMetaData:(struct UARPSuperBinaryHeader { unsigned int x0; unsigned int x1; unsigned int x2; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (id)generatePersonalizedSuperBinary;
- (id)getTlvs;
- (BOOL)preparePayload:(struct UARPPayloadHeader2 { unsigned int x0; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (id)composeTSSRequest:(unsigned long long)a0 asMeasurement:(BOOL)a1;
- (BOOL)expandSuperBinary;
- (BOOL)expandTLVs;
- (id)generatePersonalizedSuperBinaryInternal:(id)a0;
- (id)generatePersonalizedSuperBinaryWithoutRRKO;
- (void)generateTatsuMeasurements:(unsigned long long)a0;
- (BOOL)generateTatsuMeasurements:(unsigned long long)a0 relativeURL:(id)a1;
- (void)generateTatsuMeasurementsPerPayload:(unsigned long long)a0;
- (id)getDataBlock:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)getPayloads;
- (id)initWithData:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)initWithFilePath:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)initWithURL:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)logInternal:(id)a0 arguments:(char *)a1;
- (id)payloadWith4ccTag:(id)a0;
- (id)payloadsWithout4ccTag:(id)a0;
- (id)personalizeSuperBinary:(unsigned long long)a0 signingServer:(id)a1 ssoOnly:(BOOL)a2;
- (id)personalizedMetaData;
- (void)processMeasurementsForTSSOptions:(id)a0 unitNumber:(unsigned long long)a1 asMeasurement:(BOOL)a2;
- (void)processTLVsForPersonalization;
- (BOOL)queryTatsuSigningServer:(id)a0 ssoOnly:(BOOL)a1 error:(id *)a2;
- (id)requiredTSSOptions;
- (id)tatsuMeasurements:(unsigned long long)a0;
- (id)tssKeyName:(id)a0 unitNumber:(unsigned long long)a1;

@end
