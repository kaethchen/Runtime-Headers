@class NSString;

@interface _MFMessageSortingValueSender : MFMessageSortingValue

@property (copy, nonatomic) NSString *senderDisplayName;

- (void)dealloc;
- (id)description;

@end
