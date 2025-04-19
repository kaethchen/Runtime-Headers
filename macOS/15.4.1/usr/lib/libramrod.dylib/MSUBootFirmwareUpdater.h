@class NSArray, NSData;

@interface MSUBootFirmwareUpdater : NSObject

@property (readonly) BOOL supportsSlotIDs;
@property (readonly) unsigned int matchedService;
@property BOOL isErase;
@property BOOL shouldCommit;
@property (copy) NSArray *bootBlockImages;
@property (copy) NSArray *firmwareImages;
@property (copy) NSData *llbData;
@property (copy) NSData *ans2Data;
@property (copy) NSData *daliData;
@property (copy) NSData *ibootData;
@property (copy) NSData *logoData;
@property (copy, nonatomic) NSData *apNonce;
@property (nonatomic) unsigned int apNonceSlotID;

+ (id)updater;
+ (id)IOMatchingPropertyTable;
+ (id)_updaterClasses;
+ (BOOL)requiresSEPInFW;
+ (BOOL)isSingleStageBoot;
+ (BOOL)supportsAFUH;
+ (BOOL)supportsDualSPINAND;
+ (BOOL)supportsDualiBoot;
+ (BOOL)supportsPCIeNANDBoot;
+ (id)updaterForDevice;
+ (id)updaterWithIOService:(unsigned int)a0;
+ (id)updaterWithTimeout:(double)a0;

- (void)dealloc;
- (id)init;
- (id)initWithIOService:(unsigned int)a0;
- (int)_encodeAndWriteFirmware:(id)a0 toWriter:(id)a1 withError:(id *)a2;
- (id)_encodeFirmware:(id)a0 withRestoreInfo:(id)a1;
- (id)_restoreInfoDictionary;
- (id)copyFirmwareWithRestoreInfo:(id)a0;
- (BOOL)generateFirmwareImagesWithCallback:(struct ramrod_update_callbacks { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; struct ramrod_updater *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 context:(struct firmware_update_context { struct RestoredHostConnection *x0; struct __CFDictionary *x1; void *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned char x5; unsigned char x6; void *x7; struct __CFDictionary *x8; unsigned char x9; } *)a1;
- (id)initWithIOServiceMatching:(id)a0;
- (BOOL)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; struct ramrod_updater *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 context:(struct firmware_update_context { struct RestoredHostConnection *x0; struct __CFDictionary *x1; void *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned char x5; unsigned char x6; void *x7; struct __CFDictionary *x8; unsigned char x9; } *)a1 error:(id *)a2;
- (BOOL)updateBootFirmwareWithError:(id *)a0;

@end
