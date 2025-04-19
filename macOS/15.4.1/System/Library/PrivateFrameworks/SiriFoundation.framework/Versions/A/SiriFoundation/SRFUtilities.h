@interface SRFUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isFastUserSwitching;
@property (class, readonly, nonatomic) BOOL isShieldWindowShowing;

+ (BOOL)hasEntitlement:(id)a0;
+ (BOOL)_taskHasAbsolutePathReadOnly:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (BOOL)_taskHasAbsolutePathReadWrite:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (BOOL)_taskHasAppSandbox:(struct __SecTask { } *)a0;
+ (BOOL)_taskHasHomeRelativePathReadOnly:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (BOOL)_taskHasHomeRelativePathReadWrite:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (BOOL)_taskHasMachLookup:(struct __SecTask { } *)a0 forGlobalName:(id)a1;
+ (BOOL)_taskHasSharedPreferenceReadOnly:(struct __SecTask { } *)a0 forDomain:(id)a1;
+ (BOOL)_taskHasSharedPreferenceReadWrite:(struct __SecTask { } *)a0 forDomain:(id)a1;
+ (BOOL)canLookupMachService:(id)a0;
+ (BOOL)canReadAbsolutePath:(id)a0;
+ (BOOL)canReadHomeRelativePath:(id)a0;
+ (BOOL)canReadPreferenceDomain:(id)a0;
+ (BOOL)canWriteAbsolutePath:(id)a0;
+ (BOOL)canWriteHomeRelativePath:(id)a0;
+ (BOOL)canWritePreferenceDomain:(id)a0;
+ (BOOL)microphoneKeyAvailable;

@end
