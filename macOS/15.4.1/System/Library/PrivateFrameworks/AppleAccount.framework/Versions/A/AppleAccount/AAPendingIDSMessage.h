@class NSString, NSData;

@interface AAPendingIDSMessage : NSObject

@property (readonly, copy, nonatomic) NSString *senderHandle;
@property (readonly, copy, nonatomic) NSString *sentToHandleUri;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initCustodianMessageFrom:(id)a0 data:(id)a1 sentToHandleUri:(id)a2;
- (id)initInheritanceMessageFrom:(id)a0 data:(id)a1 sentToHandleUri:(id)a2;

@end
