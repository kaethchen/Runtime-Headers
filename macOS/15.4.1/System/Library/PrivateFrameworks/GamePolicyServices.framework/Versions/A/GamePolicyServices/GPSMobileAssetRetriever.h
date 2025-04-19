@class NSXPCConnection, NSDate, NSObject, GPSMobileAssetInfo;
@protocol OS_dispatch_queue;

@interface GPSMobileAssetRetriever : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_retrievalDate;
    GPSMobileAssetInfo *_mobileAssetInfo;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) GPSMobileAssetInfo *mobileAssetInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_onqueue_retrieveMobileAsset;
- (void)_onqueue_setupConnection;

@end
