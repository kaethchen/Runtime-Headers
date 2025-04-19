@class NSData, NSMutableArray;

@interface SFSyncManager_ivars : NSObject {
    NSMutableArray *_syncList;
    NSData *_blobData;
    int _logLevel;
}

- (void)dealloc;

@end
