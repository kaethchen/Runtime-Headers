@class MCMessageHeaders, MFDeliveryAccount, NSString, MCMessage;
@protocol MCMessageDataSource, MFMessageDelivererDelegate;

@interface MFMessageDeliverer : NSObject <MCActivityTarget> {
    MFDeliveryAccount *_account;
    id<MCMessageDataSource> _messageStore;
}

@property (weak, nonatomic) id<MFMessageDelivererDelegate> delegate;
@property (nonatomic) BOOL askForReadReceipt;
@property (readonly, nonatomic) MCMessageHeaders *headersForDelivery;
@property (retain, nonatomic) MCMessage *message;
@property (retain, nonatomic) MFDeliveryAccount *account;
@property (nonatomic) long long deliveryStatus;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)deliverMessage:(id)a0;
+ (id)newWithMessage:(id)a0;
+ (BOOL)deliverMessage:(id)a0 askForReadReceipt:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (void)deliverAsynchronously;
- (long long)deliverMessageHeaderData:(id)a0 bodyData:(id)a1 toRecipients:(id)a2;
- (long long)deliverSynchronously;

@end
