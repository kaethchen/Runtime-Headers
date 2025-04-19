@class NSString, NSProgress, NSDictionary, NSError;

@interface GEOMapDataSubscriptionState : NSObject <GEOXPCSerializable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _loadState;
    long long _downloadState;
    NSProgress *_progress;
    NSError *_lastError;
    NSDictionary *_userInfo;
    unsigned long long _dataCount;
    unsigned long long _dataSize;
}

@property (readonly, nonatomic) long long loadState;
@property (readonly, nonatomic) long long downloadState;
@property (readonly, nonatomic) NSProgress *downloadProgress;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) unsigned long long downloadedDataCount;
@property (readonly, nonatomic) unsigned long long downloadedDataSize;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
