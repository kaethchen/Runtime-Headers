@class XNAttachment;

@interface XNAttachmentChange : XNChange

@property (readonly, nonatomic) XNAttachment *attachment;

- (Class)managedObjectClass;
- (long long)changedObjectType;

@end
