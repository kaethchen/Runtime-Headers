@class NSMutableData, ICNFMCOutgoingMessage;

@interface _ICNFMCOutgoingMessageBody : ICNFMCMessageBody

@property (retain, nonatomic) NSMutableData *rawData;
@property (weak) ICNFMCOutgoingMessage *message;

- (id)init;
- (void).cxx_destruct;

@end
