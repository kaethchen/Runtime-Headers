@protocol TRIClientNamespaceMetadataStoring, TRIPaths;

@interface TRIPurgeabilityLevelMapper : NSObject {
    id<TRIPaths> _paths;
    id<TRIClientNamespaceMetadataStoring> _namespaceMetadataStorage;
}

+ (int)availableSpaceClassFromPurgeabilityLevel:(int)a0;
+ (id)purgeabilityLevelFromCacheDeleteUrgency:(int)a0;

- (void).cxx_destruct;
- (int)availableSpaceClassForFactorNames:(id)a0 namespaceName:(id)a1;
- (id)initWithPaths:(id)a0 namespaceMetadataStorage:(id)a1;
- (int)purgeabilityLevelForNamespace:(id)a0;

@end
