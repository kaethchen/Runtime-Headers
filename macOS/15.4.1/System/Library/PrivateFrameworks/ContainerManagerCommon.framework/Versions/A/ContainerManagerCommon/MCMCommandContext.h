@class NSString, MCMClientIdentity, MCMUserIdentityCache;
@protocol MCMGlobalConfiguration, MCMContainerCache, MCMContainerFactory, MCMContainerClassUserIdentityIterator;

@interface MCMCommandContext : NSObject <MCMCommandContext>

@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) id<MCMContainerCache> containerCache;
@property (readonly, nonatomic) id<MCMContainerFactory> containerFactory;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) unsigned int kernelPersonaID;
@property (readonly, nonatomic) id<MCMGlobalConfiguration> globalConfiguration;
@property (readonly, nonatomic) id<MCMContainerClassUserIdentityIterator> classIterator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privileged;
+ (id)privilegedWithUserIdentity:(id)a0 userIdentityCache:(id)a1;

- (void).cxx_destruct;
- (id)initWithClientIdentity:(id)a0 containerCache:(id)a1 containerFactory:(id)a2 userIdentityCache:(id)a3 kernelPersonaID:(unsigned int)a4 globalConfiguration:(id)a5;
- (id)initWithClientIdentity:(id)a0 containerCache:(id)a1 containerFactory:(id)a2 userIdentityCache:(id)a3 kernelPersonaID:(unsigned int)a4 globalConfiguration:(id)a5 classIterator:(id)a6;

@end
