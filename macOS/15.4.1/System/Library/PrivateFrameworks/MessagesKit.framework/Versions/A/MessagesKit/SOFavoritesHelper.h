@interface SOFavoritesHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;

- (BOOL)allowTwoTimeCallthroughBlocking;
- (BOOL)allowTwoTimeCallthrough;
- (BOOL)faceTimeDNDEnabled;
- (BOOL)faceTimeDNDEnabledBlocking;
- (id)faceTimeDNDMenuOptions;
- (id)faceTimeDNDMenuOptionsBlocking;
- (id)selectedFaceTimeDNDMenuOption;
- (id)selectedFaceTimeDNDMenuOptionBlocking;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValue;
- (unsigned long long)selectedFaceTimeDNDMenuOptionValueBlocking;
- (void)setAllowTwoTimeCallthrough:(BOOL)a0;
- (void)setFaceTimeDNDEnabled:(BOOL)a0;
- (void)setSelectedFaceTimeDNDMenuOption:(unsigned long long)a0;
- (void)setValue:(id)a0 forControllerKey:(id)a1;

@end
