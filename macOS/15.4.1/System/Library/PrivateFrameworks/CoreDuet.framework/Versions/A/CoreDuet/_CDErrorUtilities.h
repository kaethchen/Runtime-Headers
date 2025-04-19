@interface _CDErrorUtilities : NSObject

+ (BOOL)isCoreDataFatalError:(id)a0;
+ (BOOL)isCoreDataTemporaryError:(id)a0;
+ (void)simulateCrashWithDescription:(id)a0;
+ (id)transformErrorForNSSecureCoding:(id)a0;

@end
