@interface _TtCC23IntelligenceFlowRuntime23ToolboxXPCServiceServer6Server : NSObject <LXToolboxXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)baseRelativeURLWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)countWithPlannerType:(id)a0 toolType:(id)a1 clientIdentifier:(id)a2 with:(id /* block */)a3;
- (void)listToolsWithPlannerType:(id)a0 toolType:(id)a1 clientIdentifier:(id)a2 with:(id /* block */)a3;
- (void)metadataWithPlannerType:(id)a0 enableAllowList:(BOOL)a1 with:(id /* block */)a2;
- (void)populateWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)queryWithPlannerType:(id)a0 query:(id)a1 bundleIDs:(id)a2 with:(id /* block */)a3;
- (void)queryWithPlannerType:(id)a0 query:(id)a1 k:(long long)a2 bundleIDs:(id)a3 clientIdentifier:(id)a4 availableClientActions:(id)a5 with:(id /* block */)a6;
- (void)queryWithPlannerType:(id)a0 query:(id)a1 k:(long long)a2 clientIdentifier:(id)a3 availableClientActions:(id)a4 with:(id /* block */)a5;
- (void)queryWithPlannerType:(id)a0 query:(id)a1 toolIDs:(id)a2 with:(id /* block */)a3;
- (void)readinessWithPlannerType:(id)a0 with:(id /* block */)a1;
- (void)sandboxWithInjectionId:(id)a0 plannerType:(id)a1 with:(id /* block */)a2;
- (void)toolMappingWithPlannerType:(id)a0 customKey:(id)a1 with:(id /* block */)a2;

@end
