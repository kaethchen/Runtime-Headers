@class NSString;

@interface _TabSnapshotOnDiskImageStorageSaveOperation : NSObject

@property long long fileOperationStatus;
@property long long metadataOperationStatus;
@property (readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;

@end
