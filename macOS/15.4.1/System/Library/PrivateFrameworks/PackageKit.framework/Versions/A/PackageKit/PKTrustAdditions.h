@interface PKTrustAdditions : NSObject

+ (BOOL)evaluateDeveloperIDTrust:(struct __SecTrust { } *)a0 settingResult:(unsigned int *)a1;
+ (BOOL)evaluateFirenzeTrust:(struct __SecTrust { } *)a0 settingResult:(unsigned int *)a1 forDeveloper:(BOOL)a2 isDevelopmentSigned:(BOOL *)a3;
+ (BOOL)evaluateShotoTrust:(struct __SecTrust { } *)a0 settingResult:(unsigned int *)a1 isDevelopmentSigned:(BOOL *)a2;

@end
