@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_childKeyForParentType:(id)a0 type:(id)a1;
+ (id)_entityTypeForObject:(id)a0;
+ (id)_unsupportedMediaKitTypes;
+ (id)_unsupportedParentChildRelationships;

- (id)initWithPayload:(id)a0;
- (id)_sinfDataFromSinfType:(long long)a0 payload:(id)a1;
- (long long)_sinfTypeFromPayload:(id)a0;
- (id)performWithDatabaseOperations:(id)a0 augmentingPayload:(id *)a1;

@end
