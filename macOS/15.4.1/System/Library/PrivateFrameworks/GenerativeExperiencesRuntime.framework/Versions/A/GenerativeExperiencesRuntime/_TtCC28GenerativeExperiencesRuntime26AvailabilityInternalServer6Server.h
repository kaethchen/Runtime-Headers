@interface _TtCC28GenerativeExperiencesRuntime26AvailabilityInternalServer6Server : NSObject <GenerativeModels.AvailabilityInternalXPCProtocol>

- (id)init;
- (void)updateAllWithUpdateReason:(id)a0 with:(id /* block */)a1;
- (void)clearOverridesWith:(id /* block */)a0;
- (void)cloudAvailabilityWith:(id /* block */)a0;
- (void)getOverridesWith:(id /* block */)a0;
- (void)removeAllWith:(id /* block */)a0;
- (void)setOverride:(id)a0 forKey:(id)a1 with:(id /* block */)a2;
- (void)siriAssetStatusWith:(id /* block */)a0;
- (void)updateCacheWithDisabledUseCases:(id)a0 with:(id /* block */)a1;

@end
