@class NSSet, NSMutableDictionary;

@interface DGOperationMgr : NSObject {
    NSMutableDictionary *_operationInfoByIdentifier;
    NSMutableDictionary *_operationInfoByClassName;
    NSMutableDictionary *_namesByIdentifier;
    NSSet *_nonReorderableOperationIds;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (id)sortedIdentifiersForRenderPipelineVersion:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)operationWithIdentifier:(id)a0;
- (id)_localizedStringForKey:(id)a0 forOperationIdentifier:(id)a1;
- (id)_operationFromDictionary:(id)a0;
- (id)_operationWithIdentifier:(id)a0 fromInfoDictionary:(id)a1;
- (BOOL)allowsMultipleAdjustmentsForIdentifier:(id)a0;
- (id)displayNameForIdentifier:(id)a0;
- (id)displayNameForIdentifier:(id)a0 key:(id)a1;
- (void)loadOperationPlugIns;
- (id)longDisplayNameForIdentifier:(id)a0;
- (Class)operationClassWithIdentifier:(id)a0;
- (void)registerOperationInfoDictionary:(id)a0 withIdentifier:(id)a1;
- (id)registeredInfoDictionaryForClassName:(id)a0;
- (id)registeredInfoDictionaryForIdentifier:(id)a0;
- (id)registeredOperationIdentifiers;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)a0 renderPipelineVersion:(long long)a1;

@end
