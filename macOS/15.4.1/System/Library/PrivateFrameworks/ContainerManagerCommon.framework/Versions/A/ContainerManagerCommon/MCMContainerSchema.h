@class NSNumber, MCMContainerSchemaContext;
@protocol MCMMetadataMinimal;

@interface MCMContainerSchema : NSObject

@property (readonly, nonatomic) id<MCMMetadataMinimal> metadata;
@property (readonly, nonatomic) MCMContainerSchemaContext *context;
@property (readonly, nonatomic) NSNumber *latestSchemaVersion;

+ (id)containerSchemaWithMetadata:(id)a0 finalContainerPath:(id)a1 dataProtectionClass:(int)a2 libraryRepair:(id)a3;
+ (BOOL)schemaIsUpToDateForIdentifier:(id)a0 containerClass:(unsigned long long)a1 currentSchemaVersion:(id)a2 latestSchemaVersion:(id *)a3;

- (void).cxx_destruct;
- (id)_actionArgsAfterInterpolationOnActionArgs:(id)a0 replacements:(id)a1;
- (id)_actionsFromVersion:(id)a0 toTargetVersion:(id)a1 context:(id)a2;
- (BOOL)_executeActions:(id)a0 error:(id *)a1;
- (id)_interpolationReplacements;
- (id)initWithMetadata:(id)a0 finalContainerPath:(id)a1 dataProtectionClass:(int)a2 libraryRepair:(id)a3;
- (BOOL)writeSchemaFromVersion:(id)a0 toTargetVersion:(id)a1 error:(id *)a2;
- (BOOL)writeSchemaToTargetVersion:(id)a0 error:(id *)a1;

@end
