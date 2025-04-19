@interface AMSTapToRadar : NSObject

+ (id)_componentIDForComponent:(unsigned long long)a0;
+ (id)_componentNameForComponent:(unsigned long long)a0;
+ (id)_componentVersionForComponent:(unsigned long long)a0;
+ (id)_convertClassification:(unsigned long long)a0;
+ (id)_convertReproducibility:(unsigned long long)a0;
+ (void)openWithRadarTitle:(id)a0 radarDescription:(id)a1 promptTitle:(id)a2 promptDescription:(id)a3 classification:(unsigned long long)a4 component:(unsigned long long)a5 reproducibility:(unsigned long long)a6 keywordIds:(id)a7;
+ (void)openWithTitle:(id)a0 description:(id)a1 classification:(unsigned long long)a2 reproducibility:(unsigned long long)a3 keywordIds:(id)a4;

@end
