@interface ACSHPackageUtility : NSObject

+ (id)convertPackageInfo:(id)a0 atURL:(id)a1 fromVersion:(unsigned long long)a2;
+ (void)convertPanelElementInfo:(id)a0 atURL:(id)a1 fromVersion:(unsigned long long)a2;
+ (void)convertPanelInfo:(id)a0 atURL:(id)a1 packageInfo:(id)a2 fromVersion:(unsigned long long)a3;
+ (void)convertPanelsInfo:(id)a0 atURL:(id)a1 packageInfo:(id)a2 fromVersion:(unsigned long long)a3;
+ (id)fileWrapperForPackageWithPanelCollection:(id)a0 resourceCollection:(id)a1 packageInfo:(id)a2 error:(id *)a3;
+ (BOOL)loadPackageWithFileWrapper:(id)a0 atURL:(id)a1 panelCollection:(id *)a2 resourceCollection:(id *)a3 packageInfo:(id *)a4 isSystem:(BOOL)a5 error:(id *)a6 undoManager:(id)a7;

@end
