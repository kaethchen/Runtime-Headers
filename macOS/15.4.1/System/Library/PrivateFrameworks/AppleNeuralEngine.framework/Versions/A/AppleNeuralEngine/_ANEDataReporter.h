@interface _ANEDataReporter : NSObject

+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (id)analyticsKey:(id)a0;
+ (id)reportClient:(id)a0 modelName:(id)a1;
+ (void)reportErrorMsg:(unsigned int)a0 status:(unsigned int)a1;
+ (void)reportTelemetryToPPS:(id)a0 playload:(id)a1;

@end
