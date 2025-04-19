@class XNFolder;

@interface XNFolderChange : XNChange

@property (readonly, nonatomic) XNFolder *folder;

- (Class)managedObjectClass;
- (long long)changedObjectType;

@end
