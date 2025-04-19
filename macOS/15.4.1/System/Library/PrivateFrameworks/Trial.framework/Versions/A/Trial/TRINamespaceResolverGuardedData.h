@class NSMutableDictionary;

@interface TRINamespaceResolverGuardedData : NSObject {
    NSMutableDictionary *targetedExperimentNamespaceDescriptorDeploymentMap;
    NSMutableDictionary *targetedBMLTDeploymentMap;
    BOOL hasIssuedWarnings;
}

- (void).cxx_destruct;

@end
