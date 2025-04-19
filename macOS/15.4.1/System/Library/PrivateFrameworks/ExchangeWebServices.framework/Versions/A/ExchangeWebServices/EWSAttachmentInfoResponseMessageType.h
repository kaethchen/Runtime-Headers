@class NSArray;

@interface EWSAttachmentInfoResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *Attachments;

+ (id)definition;

- (void).cxx_destruct;

@end
