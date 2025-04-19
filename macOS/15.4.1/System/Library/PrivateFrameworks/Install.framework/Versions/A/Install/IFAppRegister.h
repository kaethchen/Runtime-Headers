@interface IFAppRegister : NSObject

+ (BOOL)_isLSApplication:(struct FSRef { unsigned char x0[80]; } *)a0;
+ (void)registerApps:(id)a0 withInstallKey:(int)a1;
+ (BOOL)shouldAddPath:(id)a0;

@end
