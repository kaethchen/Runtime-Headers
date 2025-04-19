@class DevNodeWriter;

@interface ASPStorageiBootUpdater : MSUBootFirmwareUpdater

@property (readonly, retain) DevNodeWriter *firmwareWriter;
@property (readonly, retain) DevNodeWriter *llbWriter;

+ (id)IOMatchingPropertyTable;

- (void)dealloc;
- (id)initWithIOService:(unsigned int)a0;
- (BOOL)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; struct ramrod_updater *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 context:(struct firmware_update_context { struct RestoredHostConnection *x0; struct __CFDictionary *x1; void *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned char x5; unsigned char x6; void *x7; struct __CFDictionary *x8; unsigned char x9; } *)a1 error:(id *)a2;
- (BOOL)updateBootFirmwareWithError:(id *)a0;

@end
