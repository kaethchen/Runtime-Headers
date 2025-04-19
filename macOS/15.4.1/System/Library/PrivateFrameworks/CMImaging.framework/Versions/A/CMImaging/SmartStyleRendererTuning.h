@class NSDictionary;

@interface SmartStyleRendererTuning : NSObject

@property (readonly, nonatomic) NSDictionary *selectiveColorTuning;
@property (readonly, nonatomic) NSDictionary *castAdjustmentsTuning;
@property (readonly, nonatomic) NSDictionary *toneAdjustmentsTuning;
@property (readonly, nonatomic) NSDictionary *colorAdjustmentsTuning;
@property (readonly, nonatomic) NSDictionary *defaultUserBiasByCastType;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0 keypath:(id)a1;
- (int)readCastAdjustmentsTuning:(id)a0;
- (int)readColorAdjustmentsTuning:(id)a0;
- (int)readDefaultUserBias:(id)a0;
- (int)readSelectiveColorTuning:(id)a0;
- (int)readToneAdjustmentsTuning:(id)a0;

@end
