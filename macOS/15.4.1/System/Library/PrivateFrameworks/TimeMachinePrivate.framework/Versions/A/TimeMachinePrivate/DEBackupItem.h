@class NSURL;

@interface DEBackupItem : DEItem {
    NSURL *_snapshotVolumeRootURL;
}

@property (readonly) NSURL *snapshotVolumeRootURL;

+ (void)initialize;
+ (struct _acl_entry { } *)fileGuardACE;
+ (struct _acl_entry { } *)folderGuardACE;
+ (id)standardIgnoredBackupXattrPrefixes;

- (void).cxx_destruct;
- (BOOL)compareContentModificationDate:(id)a0;
- (struct _acl { } *)copyACLForComparison;
- (id)siblingLinkPathsForComparison;

@end
