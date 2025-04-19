@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connect;
- (id)settingsService;
- (void)_clearConnection;
- (id)_syncService;

@end
