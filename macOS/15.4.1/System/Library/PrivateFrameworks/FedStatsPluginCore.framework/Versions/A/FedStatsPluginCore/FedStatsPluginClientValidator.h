@class NSDictionary;

@interface FedStatsPluginClientValidator : NSObject

@property (readonly, nonatomic) NSDictionary *association;

+ (id)sharedInstanceWithError:(id *)a0;
+ (id)checkClientIdentifier:(id)a0 againstNamespaceIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithAssociation:(id)a0;

@end
