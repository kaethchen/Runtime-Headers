@class NSDictionary;

@interface FirmwareController : NSObject {
    NSDictionary *_firmwareList;
}

+ (id)defaultController;
+ (unsigned char)decimalFromBCD:(unsigned char)a0;
+ (void)cleanupTempFiles;
+ (long long)compareThisVersion:(unsigned int)a0 to:(unsigned int)a1;
+ (struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })numVersionForBuildID:(id)a0;
+ (id)userVisibleStringFromBuildIDNumber:(id)a0;
+ (id)userVisibleStringFromNumVersion:(struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;

- (void)dealloc;
- (id)init;
- (id)allAvailableFirmwares;
- (BOOL)firmwareAvailableForPod:(id)a0;
- (id)makeFilenameForFirmware:(id)a0;
- (id)updateVersionForPod:(id)a0;

@end
