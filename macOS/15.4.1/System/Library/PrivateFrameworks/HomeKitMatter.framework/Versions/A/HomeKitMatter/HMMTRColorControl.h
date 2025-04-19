@class NSString;

@interface HMMTRColorControl : MTRBaseClusterColorControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (id)logIdentifier;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)moveToCustomColorTemperatureValue:(id)a0 transitionTime:(id)a1 completionHandler:(id /* block */)a2;
- (void)readColorModeAndColorTemperatureWithCompletion:(id /* block */)a0;
- (void)readColorTemperatureAttributesWithCompletion:(id /* block */)a0 queue:(id)a1;
- (void)readStartUpColorTemperatureWithCompletion:(id /* block */)a0;
- (void)stopMoveToColorTemperatureCommandWithCompletion:(id /* block */)a0;
- (void)supportsColorTemperatureRangeWithMinColorTemperature:(id)a0 maxColorTemperature:(id)a1 completion:(id /* block */)a2 queue:(id)a3;
- (void)writeStartUpColorTemperature:(id)a0 completion:(id /* block */)a1;
- (void)readAttributePluginColorTemperatureMiredsWithCompletionHandler:(id /* block */)a0;
- (void)moveToCustomColorTemperatureWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToPluginColorTemperatureWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeReportForColorModeWithCompletion:(id /* block */)a0;

@end
