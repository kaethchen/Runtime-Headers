@class NSMutableArray;

@interface IMDSMSPart : NSObject

@property (readonly, retain, nonatomic) NSMutableArray *textParts;
@property (readonly, retain, nonatomic) NSMutableArray *attachmentParts;

- (void).cxx_destruct;
- (void)addAttachmentPart:(id)a0;
- (void)addTextPart:(id)a0;

@end
