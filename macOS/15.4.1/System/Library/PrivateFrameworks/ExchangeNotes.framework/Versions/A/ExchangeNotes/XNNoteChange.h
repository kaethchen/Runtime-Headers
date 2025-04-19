@class XNNote;

@interface XNNoteChange : XNChange

@property (readonly, nonatomic) XNNote *note;

- (Class)managedObjectClass;
- (long long)changedObjectType;

@end
