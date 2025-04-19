@interface ILClipboardMediaManager : ILMediaManager

+ (id)clipboardPlugin;
+ (void)releaseSharedClipboardManager;
+ (id)sharedClipboardManager;

- (id)init;
- (id)bundleIdentifier;
- (id)performLoadData;
- (id)createClipboard;
- (void)addFilePaths:(id)a0 toMediaGroup:(id)a1;
- (void)changeNameOfClipboard:(id)a0 to:(id)a1;
- (id)contextMenuForMediaGroup:(id)a0;
- (id)contextMenuForMediaObject:(id)a0 inMediaGroup:(id)a1;
- (void)contextualMenuRemoveClipboard:(id)a0;
- (void)contextualMenuRemoveMediaObject:(id)a0;
- (void)createClipboardWithFilePaths:(id)a0;
- (void)createClipboardWithMediaObjects:(id)a0;
- (id)createDefaultClipboardName;
- (id)createMediaObjectsForPaths:(id)a0;
- (unsigned long long)mediaTypesSupported;
- (void)readClipboardFromDisk;
- (void)refreshClipboard:(id)a0;
- (void)removeClipboard:(id)a0;
- (void)removeMediaObject:(id)a0 fromClipboard:(id)a1;
- (void)renameClipboard:(id)a0 toName:(id)a1;
- (id)rootMediaGroupIcon;
- (id)rootMediaGroupTitle;
- (void)writeClipboardToDisk;

@end
