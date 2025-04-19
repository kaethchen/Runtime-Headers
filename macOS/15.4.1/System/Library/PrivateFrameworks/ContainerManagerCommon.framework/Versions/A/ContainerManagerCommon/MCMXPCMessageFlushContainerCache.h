@protocol MCMContainerConfiguration;

@interface MCMXPCMessageFlushContainerCache : MCMXPCMessageWithContainerClassBase <MCMParametersFlushContainerCache>

@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
