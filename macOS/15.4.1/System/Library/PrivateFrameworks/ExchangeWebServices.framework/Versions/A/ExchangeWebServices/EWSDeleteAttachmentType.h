@class NSArray;

@interface EWSDeleteAttachmentType : EWSBaseRequestType

@property (copy, nonatomic) NSArray *AttachmentIds;

+ (id)definition;

- (void).cxx_destruct;

@end
