@class EWSAttachmentResponseShapeType, NSArray;

@interface EWSGetAttachmentType : EWSBaseRequestType

@property (retain, nonatomic) EWSAttachmentResponseShapeType *AttachmentShape;
@property (copy, nonatomic) NSArray *AttachmentIds;

+ (id)definition;

- (void).cxx_destruct;

@end
