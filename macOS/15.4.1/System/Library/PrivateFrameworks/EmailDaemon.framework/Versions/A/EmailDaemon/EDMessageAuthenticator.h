@class NSString, EDMessagePersistence, ECMessageAuthenticator, NSObject;
@protocol OS_os_log;

@interface EDMessageAuthenticator : NSObject <EFLoggable, EDMessageChangeHookResponder, EFSignpostable> {
    EDMessagePersistence *_messagePersistence;
    ECMessageAuthenticator *_authenticator;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void).cxx_destruct;
- (BOOL)authenticateMessage:(id)a0;
- (BOOL)authenticateMessages:(id)a0 trustingServer:(BOOL)a1 cancelationToken:(id)a2;
- (id)initWithMessagePersistence:(id)a0 hookRegistry:(id)a1;
- (void)persistenceWillAddNewMessages:(id)a0;

@end
