@class NSNumber;

@interface _AMSystemEventsDisk : _AMSystemEventsDiskItem

@property (readonly, copy) NSNumber *capacity;
@property (readonly) BOOL ejectable;
@property (readonly) int format;
@property (readonly, copy) NSNumber *freeSpace;
@property BOOL ignorePrivileges;
@property (readonly) BOOL localVolume;
@property (readonly, copy) id server;
@property (readonly) BOOL startup;

- (id)aliases;
- (id)files;
- (id)folders;
- (id)diskItems;
- (id)filePackages;

@end
