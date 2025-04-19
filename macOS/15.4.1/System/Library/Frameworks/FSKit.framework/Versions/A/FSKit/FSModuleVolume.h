@class FSItem, NSString, FSModuleExtension, FSVolume, NSMutableDictionary, NSObject, NSXPCListener, FSResource;
@protocol OS_dispatch_queue, FSVolumeOperations;

@interface FSModuleVolume : NSObject <NSXPCListenerDelegate> {
    int connectionCount;
    unsigned char validConnections;
}

@property (retain) FSModuleExtension *ourExtension;
@property (retain) FSVolume<FSVolumeOperations> *volume;
@property (retain) FSItem *rootFSItem;
@property (retain) NSMutableDictionary *fileHandleToItemTable;
@property (readonly) NSObject<OS_dispatch_queue> *fileHandleQueue;
@property (readonly) NSXPCListener *listener;
@property (retain) FSResource *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSMutableDictionary *connections;
@property (readonly) BOOL spotlightIsEnabled;
@property (readonly) BOOL supportsKOIOOps;
@property (readonly) BOOL supportsAccessOps;
@property (readonly) BOOL supportsOpenCloseOps;
@property (readonly) BOOL supportsReadWriteOps;
@property (readonly) BOOL supportsXattrOps;
@property (readonly) BOOL supportsLimitedXattrOps;
@property (readonly) BOOL supportsCloneOps;
@property (readonly) BOOL supportsPreallocateOps;
@property (readonly) BOOL supportsVolumeRenameOps;
@property (readonly) BOOL supportsItemDeactivation;
@property (readonly) BOOL supportsOpenUnlink;
@property (readonly) BOOL reportAsLocal;
@property (retain) FSModuleExtension *ourExtension;
@property (retain) FSVolume<FSVolumeOperations> *volume;
@property (retain) FSItem *rootFSItem;
@property (retain) NSMutableDictionary *fileHandleToItemTable;
@property (readonly) NSObject<OS_dispatch_queue> *fileHandleQueue;
@property (readonly) NSXPCListener *listener;
@property (retain) FSResource *resource;

+ (id)volumeWithName:(id)a0 resource:(id)a1;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)stopUsingVolume;
- (void)fetchAndSetTypeForItem:(id)a0 replyHandler:(id /* block */)a1;
- (id)getAndRemoveItemForFH:(id)a0;
- (id)getItemForFH:(id)a0;
- (long long)getMaxFileSizeInBits;
- (long long)getMaxXattrSizeInBits;
- (id)initWithVolume:(id)a0 resource:(id)a1;
- (void)insertIntoFHCache:(id)a0;
- (unsigned char)newConnectionID:(id)a0;
- (void)removeConnectionByID:(unsigned char)a0;
- (void)removeFromFHCache:(id)a0;
- (void)updateRootItem:(id)a0 replyHandler:(id /* block */)a1;

@end
