@class NSString, NSDate;

@interface EDSynapseAttributes : NSObject

@property (readonly, copy, nonatomic) NSString *senderAddressComment;
@property (readonly, copy, nonatomic) NSString *senderAddress;
@property (readonly, copy, nonatomic) NSString *messagePersistentID;
@property (readonly, copy, nonatomic) NSDate *receivedDate;

- (void).cxx_destruct;
- (id)initWithSenderAddressComment:(id)a0 senderAddress:(id)a1 messagePersistentID:(id)a2 receivedDate:(id)a3;
- (void)saveToFile:(id)a0 completion:(id /* block */)a1;
- (BOOL)saveToFile:(id)a0 error:(id *)a1;

@end
