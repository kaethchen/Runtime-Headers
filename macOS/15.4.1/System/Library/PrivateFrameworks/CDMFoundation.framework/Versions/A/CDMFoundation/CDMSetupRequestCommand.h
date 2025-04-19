@class CDMDataDispatcherContext, NLXSchemaNLXClientEventMetadata, CDMDynamicConfig;

@interface CDMSetupRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig;
@property (readonly, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;
@property (retain, nonatomic) CDMDataDispatcherContext *dataDispatcherContext;
@property (nonatomic) BOOL shouldPerformWarmup;

+ (id)setupWithLanguageCode:(id)a0;

- (void).cxx_destruct;
- (id)initWithDynamicConfig:(id)a0;
- (id)initWithDynamicConfig:(id)a0 selfMetadata:(id)a1 dataDispatcherContext:(id)a2;
- (id)initWithDynamicConfig:(id)a0 selfMetadata:(id)a1 dataDispatcherContext:(id)a2 shouldPerformWarmup:(BOOL)a3;

@end
