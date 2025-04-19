@class NSArray, NSString, EMFetchController, NSObject;
@protocol OS_os_log;

@interface MessageListFetchHelper : NSObject <EFLoggable> {
    BOOL _mailboxesNeedFetching;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMFetchController *fetchController;
@property (copy, nonatomic) NSArray *mailboxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)fetchMailboxesIsUserInitiated:(BOOL)a0;
- (id)initWithFetchController:(id)a0 mailboxes:(id)a1;

@end
