@interface _AMFinderDisk : _AMFinderContainer

@property (readonly) long long capacity;
@property (readonly) long long freeSpace;
@property (readonly) BOOL ejectable;
@property (readonly) BOOL localVolume;
@property (readonly) BOOL startup;
@property (readonly) int format;
@property (readonly) BOOL journalingEnabled;
@property BOOL ignorePrivileges;

- (id)items;
- (id)packages;
- (id)containers;
- (id)files;
- (long long)id;
- (id)folders;
- (id)aliasFiles;
- (id)applicationFiles;
- (id)clippings;
- (id)documentFiles;
- (id)internetLocationFiles;

@end
