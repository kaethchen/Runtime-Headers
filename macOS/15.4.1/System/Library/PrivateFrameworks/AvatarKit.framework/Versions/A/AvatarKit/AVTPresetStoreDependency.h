@class AVTPreset, NSMutableArray;

@interface AVTPresetStoreDependency : NSObject

@property (retain, nonatomic) AVTPreset *overridePreset;
@property (retain, nonatomic) NSMutableArray *conditions;

- (void).cxx_destruct;
- (void)addConditionOnPreset:(id)a0;
- (void)addConditionOnPreset:(id)a0 forSpecificPresetIdentifier:(id)a1;
- (id)initWithOverridePreset:(id)a0 conditionedOnPreset:(id)a1;
- (id)initWithOverridePreset:(id)a0 conditionedOnPreset:(id)a1 forSpecificPresetIdentifier:(id)a2;

@end
