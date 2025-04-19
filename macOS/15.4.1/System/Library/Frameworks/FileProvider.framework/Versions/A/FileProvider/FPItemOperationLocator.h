@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)identifier;
- (unsigned long long)size;
- (id)filename;
- (BOOL)isDownloaded;
- (BOOL)isFolder;
- (id)parentIdentifier;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
