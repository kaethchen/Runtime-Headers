@class NSArray, NSDictionary, NSData, NSDate, ICNFMCActivityMonitor;

@interface ICNFIMAPClientAppendOperation : ICNFIMAPClientMailboxOperation

@property (readonly, nonatomic) NSData *data;
@property (retain) NSDate *dateReceived;
@property (copy) NSArray *serverFlags;
@property (copy) NSDictionary *messageInfo;
@property (retain) ICNFMCActivityMonitor *progressMonitor;
@property BOOL shouldTryCreate;

- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)activityString;
- (id)commandTypeString;
- (id)detailsString;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 flags:(id)a1 dateReceived:(id)a2 data:(id)a3;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;
- (id)debugCommandString;

@end
