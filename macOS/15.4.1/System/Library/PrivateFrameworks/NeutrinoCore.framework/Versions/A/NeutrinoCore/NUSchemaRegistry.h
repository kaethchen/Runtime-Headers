@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NUSchemaRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_schemas;
    NSMutableDictionary *_versions;
}

+ (id)sharedRegistry;

- (id)init;
- (void).cxx_destruct;
- (id)_allVersionsWithOriginalIdentifier:(id)a0 upToVersion:(id)a1;
- (id)_latestVersionWithOriginalIdentifier:(id)a0;
- (void)_registerBuiltInSchemas;
- (BOOL)_registerSchema:(id)a0 error:(out id *)a1;
- (BOOL)_registerVersion:(id)a0 withOriginalIdentifier:(id)a1 error:(out id *)a2;
- (id)_schemaWithIdentifier:(id)a0;
- (id)latestVersionWithNamespace:(id)a0 name:(id)a1;
- (BOOL)registerSchema:(id)a0 error:(out id *)a1;
- (BOOL)registerSchemas:(id)a0 error:(out id *)a1;
- (id)schemaWithIdentifier:(id)a0;
- (id)versionsCompatibleWithIdentifier:(id)a0;

@end
