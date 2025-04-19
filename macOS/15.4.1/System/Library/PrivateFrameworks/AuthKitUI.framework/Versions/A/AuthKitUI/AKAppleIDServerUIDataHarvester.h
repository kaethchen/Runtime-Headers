@class NSDictionary, NSMutableDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {
    NSMutableDictionary *_harvestedData;
}

@property (readonly, copy, nonatomic) NSDictionary *harvestedData;

- (id)init;
- (void).cxx_destruct;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)a0;
- (void)harvestDataFromServerHTTPResponse:(id)a0;
- (void)harvestIDMSRecoveryInfoFromClientInfo:(id)a0;
- (void)harvestIDMSRecoveryInfoFromHeaders:(id)a0;

@end
