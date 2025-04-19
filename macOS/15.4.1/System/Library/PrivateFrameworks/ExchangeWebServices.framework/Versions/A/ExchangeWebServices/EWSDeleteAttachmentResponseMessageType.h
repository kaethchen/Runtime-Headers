@class EWSRootItemIdType;

@interface EWSDeleteAttachmentResponseMessageType : EWSResponseMessageType

@property (retain, nonatomic) EWSRootItemIdType *RootItemId;

+ (id)definition;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
