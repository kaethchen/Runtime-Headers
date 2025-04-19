@class STBlueprint, STDowntimeOverride;

@interface STBlueprintBackedDowntimeOverrideModifier : NSObject <STDowntimeOverrideModifier>

@property (readonly) STBlueprint *downtimeBlueprint;
@property (readonly, copy) STDowntimeOverride *activeOverride;

- (void).cxx_destruct;
- (BOOL)_saveWithError:(id *)a0;
- (void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:(id)a0;
- (void)_tombstoneDowntimeOverride;
- (BOOL)applyDowntimeOverride:(id)a0 error:(id *)a1;
- (id)initWithDowntimeBlueprint:(id)a0;
- (BOOL)removeDowntimeOverrideWithError:(id *)a0;

@end
