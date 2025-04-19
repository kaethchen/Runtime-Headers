@interface QLGeneratorUTIManager : NSObject

+ (void)_clearTestGenerators;
+ (BOOL)_pluginExistsForType:(id)a0 extensionType:(unsigned long long)a1 outIsViewBased:(BOOL *)a2 outShouldUseLegacyGenerator:(BOOL *)a3;
+ (void)_resetGeneratorsForTesting;
+ (void)_setTestDatabaseWithMockGenerators:(id)a0;
+ (void)_setupTestGenerator:(struct __QLGenerator { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFURL *x1; struct __CFBundle *x2; struct __CFString *x3; char *x4; struct __CFString *x5; struct __CFString *x6; struct __CFArray *x7; void *x8; unsigned char x9; id x10; double x11; id x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; double x21; struct CGSize { double x0; double x1; } x22; unsigned char x23; void *x24; void *x25; int x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; } *)a0 withDisplayBundleID:(id)a1;
+ (BOOL)isUsingTestDatabase;
+ (BOOL)pluginExistsForPreviewType:(id)a0 outIsViewBased:(BOOL *)a1 outShouldUseLegacyGenerator:(BOOL *)a2;
+ (BOOL)shouldUseLegacyGeneratorForThumbnailType:(id)a0;

@end
