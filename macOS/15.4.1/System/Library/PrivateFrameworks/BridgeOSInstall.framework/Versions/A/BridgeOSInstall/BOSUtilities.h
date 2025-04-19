@interface BOSUtilities : NSObject

+ (BOOL)currentHardwareHasBridgeOS;
+ (id)sandboxURLWithLabel:(id)a0;
+ (id)weakStringConstant:(id)a0;
+ (id)descriptionForState:(int)a0;
+ (unsigned long long)compareBridgeVersion:(id)a0 toBridgeVersion:(id)a1;
+ (id)descriptionForOperation:(int)a0;
+ (unsigned long long)evaluateBridgeVersion:(id)a0 againstMinimumVersion:(id)a1;

@end
