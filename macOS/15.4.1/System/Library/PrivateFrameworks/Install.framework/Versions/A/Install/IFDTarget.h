@interface IFDTarget : NSObject {
    struct IFDTarget_Private { id x0; id x1; id x2; id x3; int x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; } *_private;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)status;
- (id)initWithPath:(id)a0;
- (id)volume;
- (void)setStatus:(int)a0;
- (id)searchContext;
- (id)volumeName;
- (id)contextData;
- (id)volumePath;
- (id)volumeSize;
- (id)volumeID;
- (id)owningController;
- (void)setOwningController:(id)a0;
- (id)installedSystemBuild;
- (id)installedSystemName;
- (id)installedSystemVersion;
- (id)volumeAvailableSize;
- (id)_displayableVolumePathNameForString:(id)a0;
- (id)subPath;
- (id)installedSystemCompatDictionary;
- (void)addError:(id)a0 forPackage:(id)a1;
- (id)errorForPackage:(id)a0;
- (id)failureMessage;
- (id)initWithTarget:(id)a0 andSubPath:(id)a1;
- (id)initWithVolume:(id)a0 andSubPath:(id)a1;
- (int)installDomain;
- (id)installedSystemCompatBuild;
- (id)installedSystemCompatName;
- (id)installedSystemCompatVersion;
- (id)installedSystemDictionary;
- (id)receiptForPackage:(id)a0;
- (id)receiptSizeForPackage:(id)a0;
- (void)setFailureMessage:(id)a0;
- (void)setInstalledSystemCompatDictionary:(id)a0;
- (void)setInstalledSystemDictionary:(id)a0;
- (void)setReceipt:(id)a0 forPackage:(id)a1;
- (id)volumeFreeSize;

@end
