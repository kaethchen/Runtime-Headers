@class RSFloorPlanRender;

@interface RSFloorPlanGeneratorBase : NSObject {
    unsigned long long _inputSemanticsVersion;
    BOOL _isDoorWindowEnabled;
}

@property (retain, nonatomic) RSFloorPlanRender *render;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)inputSemanticsVersion;
- (BOOL)isDoorWindowEnabled;
- (void)setChairBeautificationEnable:(BOOL)a0;
- (void)setDoorWindowEnable:(BOOL)a0;
- (void)setObjectBeautificationEnable:(BOOL)a0;
- (void)setStandardizationEnable:(BOOL)a0;
- (void)setUniformHeightPolygonEnable:(BOOL)a0;

@end
