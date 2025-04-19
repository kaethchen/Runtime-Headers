@class PUDevice, NSMutableDictionary;

@interface SysInfo : NSObject {
    PUDevice *_device;
    NSMutableDictionary *_sysInfo;
}

- (void)dealloc;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)serialNumber;
- (unsigned int)firmwareVersion;
- (void)readSysInfoFile;
- (int)updaterFamilyID;
- (void)parseSysInfoData:(id)a0;
- (int)podFamilyID;
- (id)userVisibleFirmwareVersion;

@end
