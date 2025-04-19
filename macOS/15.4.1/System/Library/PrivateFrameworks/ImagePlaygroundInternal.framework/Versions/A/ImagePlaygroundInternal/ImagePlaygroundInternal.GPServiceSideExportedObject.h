@interface ImagePlaygroundInternal.GPServiceSideExportedObject : _TtCs12_SwiftObject <ImagePlayground.GPServiceProtocol> {
    void /* unknown type, empty encoding */ extensionState;
    void /* unknown type, empty encoding */ composingViewModel;
    void /* unknown type, empty encoding */ playgroundHomeViewModel;
    void /* unknown type, empty encoding */ deferredConfigurationHandlers;
}

- (void)setSourceImage:(id)a0;
- (void)didFinishServiceConfiguration;
- (void)setAllowedGenerationStyles:(id)a0;
- (void)setIsLoadingRecipe:(BOOL)a0;
- (void)setPersonalizationPolicy:(id)a0;
- (void)setPromptElements:(id)a0;
- (void)setRecipeData:(id)a0;
- (void)setResponsibleAuditToken:(id)a0;
- (void)setSelectedGenerationStyle:(id)a0;
- (void)startUpscaling;
- (void)willBeginServiceConfiguration;

@end
