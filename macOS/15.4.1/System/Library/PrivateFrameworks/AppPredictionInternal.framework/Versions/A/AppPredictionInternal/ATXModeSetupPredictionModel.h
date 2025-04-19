@interface ATXModeSetupPredictionModel : NSObject {
    unsigned long long _mode;
}

- (id)initWithMode:(unsigned long long)a0;
- (id)modelName;
- (double)probabilityScore;
- (id)featuresToModel;
- (id)modeSetupPredictionModel;

@end
