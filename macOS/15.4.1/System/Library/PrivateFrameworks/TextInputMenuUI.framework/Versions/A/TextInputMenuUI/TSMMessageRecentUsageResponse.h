@class NSArray;

@interface TSMMessageRecentUsageResponse : NSObject <TSMMessageProtocol>

@property (readonly, nonatomic) NSArray *sortedRecentlyUsedInputSourceUniqueIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;

@end
