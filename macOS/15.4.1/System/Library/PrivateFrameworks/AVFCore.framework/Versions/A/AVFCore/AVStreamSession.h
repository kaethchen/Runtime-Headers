@class NSArray, NSData, NSURL, AVStreamSessionInternal;

@interface AVStreamSession : NSObject {
    AVStreamSessionInternal *_session;
}

@property (readonly) NSData *appIdentifier;
@property (readonly) NSURL *storageURL;
@property (readonly) NSArray *streamDataParsers;
@property (readonly) NSData *contentProtectionSessionIdentifier;

+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)a0;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)a0 storageDirectoryAtURL:(id)a1;
+ (void)removePendingExpiredSessionReports:(id)a0 withAppIdentifier:(id)a1;
+ (void)removePendingExpiredSessionReports:(id)a0 withAppIdentifier:(id)a1 storageDirectoryAtURL:(id)a2;

- (void)dealloc;
- (id)init;
- (void)setAppIdentifier:(id)a0;
- (void)_willDeallocOrFinalize;
- (void)addStreamDataParser:(id)a0;
- (void)expire;
- (struct OpaqueFigCPEProtector { } *)figCPEProtector:(int *)a0;
- (id)initWithStorageDirectoryAtURL:(id)a0;
- (void)removeStreamDataParser:(id)a0;
- (void)setFigCPEProtectorSessionIdentifier:(id)a0;

@end
