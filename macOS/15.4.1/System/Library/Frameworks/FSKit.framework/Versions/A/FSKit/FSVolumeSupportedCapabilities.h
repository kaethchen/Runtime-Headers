@interface FSVolumeSupportedCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long capabilities;
@property (nonatomic) BOOL supportsPersistentObjectIDs;
@property (nonatomic) BOOL supportsSymbolicLinks;
@property (nonatomic) BOOL supportsHardLinks;
@property (nonatomic) BOOL supportsJournal;
@property (nonatomic) BOOL supportsActiveJournal;
@property (nonatomic) BOOL doesNotSupportRootTimes;
@property (nonatomic) BOOL supportsSparseFiles;
@property (nonatomic) BOOL supportsZeroRuns;
@property (nonatomic) BOOL supportsFastStatFS;
@property (nonatomic) BOOL supports2TBFiles;
@property (nonatomic) BOOL supportsOpenDenyModes;
@property (nonatomic) BOOL supportsHiddenFiles;
@property (nonatomic) BOOL doesNotSupportVolumeSizes;
@property (nonatomic) BOOL supports64BitObjectIDs;
@property (nonatomic) BOOL supportsDocumentID;
@property (nonatomic) BOOL doesNotSupportImmutableFiles;
@property (nonatomic) BOOL doesNotSupportSettingFilePermissions;
@property (nonatomic) BOOL supportsSharedSpace;
@property (nonatomic) BOOL supportsVolumeGroups;
@property (nonatomic) long long caseFormat;

- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
