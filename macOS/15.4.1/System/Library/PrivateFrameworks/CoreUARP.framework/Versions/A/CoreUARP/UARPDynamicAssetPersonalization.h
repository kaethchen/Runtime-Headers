@class NSString, NSURL, NSDictionary, UARPAssetTag, UARPUploaderEndpoint, NSObject, NSMutableArray, UARPSuperBinaryAsset;
@protocol OS_os_log, OS_dispatch_queue;

@interface UARPDynamicAssetPersonalization : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_options;
    UARPSuperBinaryAsset *_im4mAsset;
    NSString *_keyNameManifest;
    NSString *_keyNameTicket;
    NSString *_keyNameBoardID;
    NSString *_keyNameChipID;
    NSString *_keyNameECID;
    NSString *_keyNameNonce;
    NSString *_keyNameProductionMode;
    NSString *_keyNameSecurityDomain;
    NSString *_keyNameSecurityMode;
    NSString *_keyNameSoCLiveNonce;
}

@property (readonly) UARPUploaderEndpoint *endpoint;
@property (readonly) NSURL *url;
@property (readonly) NSURL *tatsuServerURL;
@property (readonly) long long assetNumber;
@property (readonly) NSDictionary *options;
@property (readonly) UARPAssetTag *tagIM4M;

- (id)init;
- (void).cxx_destruct;
- (id)buildKey:(id)a0 forPayload:(id)a1;
- (id)buildTicketPrefixForPayload:(id)a0;
- (BOOL)compareTssResponse:(id)a0;
- (id)initWithEndpoint:(id)a0 url:(id)a1 tatsuServerURL:(id)a2;
- (BOOL)prepareDynamicAsset:(id)a0 error:(id *)a1;
- (BOOL)processDynamicAsset:(id *)a0;
- (BOOL)processTssResponse:(id)a0;
- (BOOL)tssRequest:(id)a0 error:(id *)a1;

@end
