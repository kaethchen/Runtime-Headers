@class TMRulesEngineBOM;

@interface TMRulesEngineBuilder : NSObject {
    id /* block */ _cancelBlock;
    TMRulesEngineBOM *_bom;
}

- (id)init;
- (void).cxx_destruct;
- (void)_processMailRealmsUsingContext:(id)a0;
- (id)_assembleDeviceEnginesUsingContext:(id)a0;
- (id)_generateConstructionContext;
- (void)_processPathExclusionsUsingContext:(id)a0;
- (void)_processStickyExclusionsUsingContext:(id)a0;
- (void)_processSystemFilesUsingContext:(id)a0 qos:(long long)a1;
- (void)_processUserHomesUsingContext:(id)a0;
- (id)buildRulesEngineFindStickyExclusionsUsingSpotlight:(BOOL)a0 qos:(long long)a1;
- (id)buildRulesEngineQoS:(long long)a0;
- (id)initWithBOM:(id)a0 cancelBlock:(id /* block */)a1;

@end
