@class NSString, NSDictionary, _NUStyleEngineConfiguration, CMIStyleEngineProcessor;
@protocol MTLCommandQueue;

@interface _NUStyleEngine : NSObject {
    unsigned long long _sid;
}

@property (readonly, nonatomic) NSString *usage;
@property (readonly, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) _NUStyleEngineConfiguration *configuration;
@property (readonly, nonatomic) NSDictionary *tuningParams;
@property (readonly, nonatomic) CMIStyleEngineProcessor *processor;

+ (BOOL)usingSharedStyleEngineForUsage:(id)a0 withMetalCommandQueue:(id)a1 configuration:(id)a2 tuningParams:(id)a3 perform:(id /* block */)a4;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)processingType;
- (id)initWithUsage:(id)a0 metalCommandQueue:(id)a1 configuration:(id)a2 tuningParams:(id)a3;
- (BOOL)matchesTuningParameters:(id)a0;
- (BOOL)matchesUsage:(id)a0 metalCommandQueue:(id)a1 configuration:(id)a2 tuning:(id)a3;
- (id)memoryDescriptor;
- (void)resetProcessor;
- (BOOL)setupProcessor;

@end
