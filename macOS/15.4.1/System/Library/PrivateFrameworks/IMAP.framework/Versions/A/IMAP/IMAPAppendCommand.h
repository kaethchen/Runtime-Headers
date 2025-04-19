@class NSArray, NSDictionary, NSData, NSDate, MCActivityMonitor;

@interface IMAPAppendCommand : IMAPMailboxCommand

@property (retain) NSDate *dateReceived;
@property (copy) NSArray *serverFlags;
@property (copy) NSDictionary *messageInfo;
@property (retain) MCActivityMonitor *progressMonitor;
@property BOOL shouldTryCreate;
@property (readonly, copy, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)activityString;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (id)detailsString;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 flags:(id)a1 dateReceived:(id)a2 data:(id)a3;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;

@end
