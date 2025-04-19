@interface CaseDampeningExceptions : NSObject

+ (void)setProductType:(id)a0;
+ (void)setWiFiChipset:(id)a0;
+ (BOOL)allowDampeningExceptionFor:(id)a0;
+ (BOOL)isException:(id)a0 containedInString:(id)a1;
+ (BOOL)isString:(id)a0 inExceptionList:(id)a1;
+ (void)setBasebandChipset:(id)a0;
+ (void)setLoggingHandle:(id)a0;
+ (void)setNPIDevice:(BOOL)a0;

@end
