@class NSString, NSURL, NSDate, NSNumber;
@protocol TMMachineStoreInfo;

@interface TMSessionVolumeStore : NSObject <TMVolumeStoreInfo>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *url;
@property (readonly, copy) NSString *volumeUUID;
@property (readonly, copy) NSString *fstype;
@property (readonly, copy) NSString *volumeGroupUUID;
@property (readonly, copy) NSNumber *volumeRole;
@property (readonly) BOOL isCaseSensitive;
@property (readonly) NSDate *dateBackupCompleted;
@property (readonly) id<TMMachineStoreInfo> machineStoreInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVolumeStore:(id)a0 machineStoreInfo:(id)a1 backup:(id)a2;

@end
