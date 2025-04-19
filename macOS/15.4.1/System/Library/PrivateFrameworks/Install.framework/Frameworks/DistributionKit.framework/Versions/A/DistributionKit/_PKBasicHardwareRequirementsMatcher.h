@interface _PKBasicHardwareRequirementsMatcher : NSObject

+ (void)initialize;
+ (BOOL)_sysctlPrefixIsValidForKeyPath:(id)a0;
+ (id)_validSysctlPrefixes;

- (id)valueForKeyPath:(id)a0;

@end
