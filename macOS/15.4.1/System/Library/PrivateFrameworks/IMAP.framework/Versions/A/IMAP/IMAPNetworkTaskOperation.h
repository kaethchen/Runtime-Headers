@class NSString, IMAPNetworkTaskHandler;

@interface IMAPNetworkTaskOperation : MCTaskHandlerOperation

@property (retain) IMAPNetworkTaskHandler *handler;
@property (retain, nonatomic) NSString *mailboxName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;

@end
