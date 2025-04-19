@class NSString, NSImage;

@interface STMFreeSpaceRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property long long state;
@property unsigned long long spaceRequested;
@property (retain) NSString *volume;
@property long long operationType;
@property struct CacheDeleteToken { } *cacheDeleteToken;
@property (copy) id /* block */ completionBlock;
@property (retain) NSString *operationTypeLabel;
@property (copy) NSString *messageText;
@property (copy) NSString *informativeText;
@property (copy) NSImage *icon;
@property (copy) NSString *cancelButtonTitle;
@property BOOL userInteractionAllowed;
@property long long urgency;
@property (readonly) unsigned long long freeSpaceOnBootVolume;

+ (id)requestFreeSpace:(unsigned long long)a0 onVolume:(id)a1;
+ (unsigned long long)freeSpaceOnVolume:(id)a0;
+ (unsigned long long)recoverableSpaceOnVolume:(id)a0;
+ (unsigned long long)recoverableSpaceOnVolume:(id)a0 urgency:(long long)a1;
+ (id)requestFreeSpace:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)cancel;
- (id)begin:(id /* block */)a0;
- (void)setOperationType:(long long)a0 label:(id)a1;
- (unsigned long long)freeSpaceOnBootVolume;
- (void)setStateAndUpdateClient:(long long)a0 error:(id)a1;
- (void)showNeedDiskSpaceUI:(unsigned long long)a0;

@end
