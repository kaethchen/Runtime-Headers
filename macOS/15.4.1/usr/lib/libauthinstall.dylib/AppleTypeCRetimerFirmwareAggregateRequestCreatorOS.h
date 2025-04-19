@class NSDictionary, NSData, NSArray;

@interface AppleTypeCRetimerFirmwareAggregateRequestCreatorOS : AppleTypeCRetimerRestoreInfoHelperOS {
    NSData *_rkosData;
    NSData *_rrkoData;
    NSData *_cphyData;
    NSArray *_deviceInfoArray;
    NSDictionary *_apParameters;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (id)generateHashForData:(id)a0;
- (BOOL)generateRequestDictionary;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;

@end
