@interface CDMServiceCenterUtils : NSObject

+ (id)getAvailableServiceGraphs:(id)a0;
+ (unsigned int)getServiceCenterQueueQOS;
+ (BOOL)isHostedInDaemon;
+ (BOOL)isServiceCenterEnabled:(id)a0;
+ (BOOL)needEmbeddingConfigsFor:(id)a0;
+ (id)tryInitDAGServices:(id)a0;

@end
