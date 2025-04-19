@class InputSourceOwner;

@interface TSMMessageGetTIMTargetAppInfoResponse : NSObject <TSMMessageProtocol>

@property (readonly, nonatomic) InputSourceOwner *inputSourceOwner;

- (void).cxx_destruct;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;

@end
