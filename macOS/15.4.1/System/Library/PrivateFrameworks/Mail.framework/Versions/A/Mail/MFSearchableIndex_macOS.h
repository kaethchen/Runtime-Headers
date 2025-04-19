@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndex_macOS : EDSearchableIndex <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isPluggedIn;
- (id)powerObservable;
- (void)indexMessages:(id)a0 includeBody:(BOOL)a1 indexingType:(long long)a2;
- (id)initWithName:(id)a0 dataSource:(id)a1;
- (void)markMessagesAsPrinted:(id)a0;
- (void)_indexMessages:(id)a0 includeBody:(BOOL)a1 indexingType:(long long)a2;
- (void)_messageFlagsChanged:(id)a0;
- (void)deleteMailboxWithURL:(id)a0 databaseID:(long long)a1;

@end
