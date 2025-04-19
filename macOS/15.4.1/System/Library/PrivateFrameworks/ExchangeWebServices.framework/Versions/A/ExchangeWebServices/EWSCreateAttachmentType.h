@class NSArray, EWSItemIdType;

@interface EWSCreateAttachmentType : EWSBaseRequestType

@property (retain, nonatomic) EWSItemIdType *ParentItemId;
@property (copy, nonatomic) NSArray *Attachments;

+ (id)definition;

- (void).cxx_destruct;

@end
