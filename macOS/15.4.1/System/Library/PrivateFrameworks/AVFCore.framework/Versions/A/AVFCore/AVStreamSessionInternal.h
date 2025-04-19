@class NSMutableSet, AVWeakReference, NSData, NSURL, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface AVStreamSessionInternal : NSObject {
    AVWeakReference *_welf;
    NSData *_appIdentifier;
    NSURL *_storageURL;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSHashTable *_streamDataParsers;
    NSMutableSet *_contentKeySessions;
    BOOL _isExpired;
    struct OpaqueFigCPEProtector { } *_figCPEProtector;
    NSData *_figCPEProtectorSessionIdentifier;
}

@end
