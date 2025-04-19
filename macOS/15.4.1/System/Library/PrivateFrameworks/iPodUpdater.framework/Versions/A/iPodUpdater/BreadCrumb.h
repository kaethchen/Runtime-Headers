@class Pod;

@interface BreadCrumb : NSObject {
    struct { unsigned char updateOrRestore; unsigned char bangOrRecovery; unsigned char host; unsigned char updaterHost; unsigned int updaterVersion; unsigned int firmwareVersion; unsigned int previousFirmwareVersion; unsigned int osVersion; unsigned int restoreStartTime; unsigned int restoreFinishTime; unsigned char connection; unsigned short applicationName[32]; char errorCode[16]; unsigned char architecture; unsigned char powered; char previousBuildVersion[16]; char newBuildVersion[16]; char osVersionString[16]; } _infoRec;
    Pod *_pod;
    long long _offset;
}

- (void)dealloc;
- (id)description;
- (int)host;
- (void)setHost:(int)a0;
- (int)connectionType;
- (int)architecture;
- (long long)offset;
- (void)setOffset:(long long)a0;
- (id)startTime;
- (id)applicationName;
- (id)errorCode;
- (void)setErrorCode:(id)a0;
- (int)write;
- (struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })osVersion;
- (void)setConnectionType:(int)a0;
- (void)setPowered:(BOOL)a0;
- (BOOL)powered;
- (id)previousBuildVersion;
- (void)setPreviousBuildVersion:(id)a0;
- (void)setRecoveryType:(int)a0;
- (id)finishTime;
- (void)setRestoreType:(int)a0;
- (int)recoveryType;
- (id)osVersionString;
- (void)setArchitecture;
- (void)setUpdaterHost:(int)a0;
- (id)newBuildVersion;
- (BOOL)appearsValid;
- (long long)compareStartingTime:(id)a0;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned short x11[32]; char x12[16]; unsigned char x13; unsigned char x14; char x15[16]; char x16[16]; char x17[16]; } *)infoRecord;
- (id)initNewCrumbWithPod:(id)a0 atOffset:(long long)a1;
- (id)initWithPod:(id)a0 atOffset:(long long)a1 version:(unsigned short)a2;
- (struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })previousFirmwareVersion;
- (int)readWithVersion:(unsigned short)a0;
- (int)restoreType;
- (void)setApplicationName;
- (void)setFinishTimeToNow;
- (void)setNewBuildVersion:(id)a0;
- (void)setOSVersion;
- (void)setOSVersionString;
- (void)setPreviousFirmwareVersion:(struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;
- (void)setStartTimeToNow;
- (void)setUpdaterVersion;
- (void)setUpdatingFirmwareVersion:(struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;
- (int)updaterHost;
- (struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })updaterVersion;
- (struct NumVersion { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })updatingFirmwareVersion;

@end
