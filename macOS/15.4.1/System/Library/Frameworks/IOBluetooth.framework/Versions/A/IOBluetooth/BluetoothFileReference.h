@class NSString, NSFileHandle;

@interface BluetoothFileReference : NSObject {
    NSString *mPathAndName;
    NSString *mName;
    NSString *mPreArchiveName;
    NSString *mTempDirPathAndName;
    NSFileHandle *mHandle;
    unsigned long long mSize;
    unsigned long long mSizeReceived;
    BOOL mIsArchived;
    unsigned long long mArchiveSize;
    BOOL mIsPreProcessed;
    BOOL mIsPostProcessed;
    BOOL mAllDataIsReceived;
    BOOL mIsOutputFile;
    BOOL mDLToTempDir;
    BOOL mTargetIsAMac;
    BOOL mDeleteOnRelease;
    BOOL mWasFolder;
    BOOL mFlag1;
    BOOL mFlag2;
    BOOL mFlag3;
}

+ (unsigned int)archiveOptionsForOBEXSession:(id)a0;
+ (id)referenceInputPathAndFile:(id)a0 targetIsAMac:(BOOL)a1 enableArchiving:(BOOL)a2 archiveOptions:(unsigned int)a3;
+ (id)referenceOutputPathAndFile:(id)a0 downloadToTempDir:(BOOL)a1 allowRenaming:(BOOL)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)path;
- (id)type;
- (unsigned long long)size;
- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1;
- (BOOL)remove;
- (id)handle;
- (BOOL)isFolder;
- (BOOL)isPostProcessed;
- (BOOL)allDataIsReceived;
- (BOOL)canCreateFile:(id)a0;
- (int)doArchivingWithOptions:(unsigned int)a0;
- (int)doUnArchivingWithOptions:(unsigned int)a0;
- (BOOL)getFlag1;
- (BOOL)getFlag2;
- (BOOL)getFlag3;
- (BOOL)isArchived;
- (BOOL)isPreProcessed;
- (void)moveToFinalPathAndName;
- (BOOL)moveToPathAndName:(id)a0;
- (id)pathAndName;
- (id)preArchiveName;
- (id)preArchivePathAndName;
- (void)reOpenHandle;
- (void)saveHandle;
- (void)setAllDataReceived;
- (void)setDeleteFileOnRelease:(BOOL)a0;
- (void)setExpectedSize:(unsigned long long)a0;
- (BOOL)setFinalOutputPathAndName:(id)a0;
- (void)setFlag1:(BOOL)a0;
- (void)setFlag2:(BOOL)a0;
- (void)setFlag3:(BOOL)a0;
- (void)setIsPostProcessed;
- (void)setIsPreProcessed;
- (void)setNeedsUnarchiving;
- (BOOL)setOutputPathAndName:(id)a0;
- (void)setTargetIsAMac:(BOOL)a0;
- (id)sizeAsString;
- (unsigned long long)sizeReceived;
- (BOOL)writeDataToHandle:(id)a0;

@end
