@interface PowerUIMLPhonePredictor : PowerUIMLTwoStageModelPredictor

- (id)getInputFeatures:(double)a0 events:(id)a1 pluginBatteryLevel:(unsigned long long)a2 timeFromPlugin:(double)a3 pluginDate:(id)a4 withLog:(id)a5;
- (id)getMultiArrayForFeatureDict:(id)a0;
- (int)modelDataVersion;

@end
