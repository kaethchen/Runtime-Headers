@class MFMailbox, EMQuery, EMFocus, EFAutoCancelationToken, NSString, NSObject, EDMessageCountQueryHandler;
@protocol OS_os_log;

@interface MFMailboxCountUpdater : NSObject <EMCurrentFocusObserver, EMMessageRepositoryCountQueryObserver_xpc, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) MFMailbox *mailbox;
@property (readonly, nonatomic) EMQuery *query;
@property (readonly, nonatomic) EDMessageCountQueryHandler *queryHandler;
@property (retain) EMFocus *currentFocus;
@property (retain, nonatomic) EFAutoCancelationToken *focusObservationToken;
@property (readonly, nonatomic) BOOL shouldCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)countDidChange:(long long)a0 acknowledgementToken:(id)a1;
- (void)currentFocusChanged:(id)a0;
- (id)initWithMailbox:(id)a0 query:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 refireDebounceInterval:(double)a4 shouldCache:(BOOL)a5;
- (void)setFocusController:(id)a0;

@end
