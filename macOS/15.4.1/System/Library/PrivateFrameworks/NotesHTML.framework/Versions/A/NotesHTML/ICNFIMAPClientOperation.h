@class NSString, NSMutableString, ICNFIMAPGateway;

@interface ICNFIMAPClientOperation : NSOperation

@property (readonly, copy) NSString *commandTypeString;
@property (readonly) BOOL alwaysAllowToComplete;
@property (readonly) BOOL completedSuccessfully;
@property (readonly) BOOL shouldSendAgainOnError;
@property (readonly) long long minRequiredConnectionState;
@property (readonly) long long maxAllowedConnectionState;
@property (readonly) long long composition;
@property (readonly) BOOL isWaitingToStart;
@property (readonly, copy) NSString *activityString;
@property (readonly, copy) NSString *detailsString;
@property (readonly, copy, nonatomic) NSString *shallowDescription;
@property (readonly, copy, nonatomic) NSMutableString *simpleDescriptionString;
@property (retain) ICNFIMAPGateway *gateway;
@property long long completionState;

+ (id)IMAPNeedsLiteralCharacterSet;
+ (id)_IMAPNeedsQuoteCharacterSet;
+ (id)newIMAPQuotedString:(id)a0;
+ (id)newIMAPStringForMailboxName:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)increasePriority;
- (void)operationDidFinish;
- (void)cleanupAfterCompletion;
- (BOOL)executeOnConnection:(id)a0;

@end
