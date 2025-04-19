@class NSURL, UARPSuperBinaryAsset, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetLogsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSObject<OS_os_log> *_log;
}

+ (id)tag;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)createLogsFilepath:(id)a0 forRemoteEndpoint:(id)a1;
- (BOOL)decomposeUARP;
- (BOOL)expandToDirectory:(id)a0 forRemoteEndpoint:(id)a1;

@end
