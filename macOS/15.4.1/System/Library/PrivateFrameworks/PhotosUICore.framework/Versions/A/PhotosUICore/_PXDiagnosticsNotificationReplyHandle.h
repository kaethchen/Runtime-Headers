@class NSString;

@interface _PXDiagnosticsNotificationReplyHandle : NSObject <PXDiagnosticsNotificationReplyHandle>

@property (readonly, nonatomic) long long idNumber;
@property (readonly, copy, nonatomic) id /* block */ replyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIDNumber:(long long)a0 replyBlock:(id /* block */)a1;
- (void)replyWithInfo:(id)a0;

@end
