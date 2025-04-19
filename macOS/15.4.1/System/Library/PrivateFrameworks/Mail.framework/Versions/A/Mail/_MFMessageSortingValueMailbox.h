@class MFMailbox;

@interface _MFMessageSortingValueMailbox : MFMessageSortingValue

@property (retain, nonatomic) MFMailbox *mailbox;

- (void)dealloc;
- (id)description;

@end
