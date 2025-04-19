@class NSDictionary, NSArray, NSData;

@interface PS190TatsuRequestCreatorBackDeploy : PS190SoCRestoreInfoHelperBackDeploy {
    NSArray *_deviceInfoArray;
    NSData *_firmwareData;
    NSDictionary *_apParameters;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (BOOL)generateRequestDictionary;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;

@end
