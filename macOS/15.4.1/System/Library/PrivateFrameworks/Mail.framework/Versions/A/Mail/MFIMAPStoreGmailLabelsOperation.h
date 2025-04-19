@class NSArray;

@interface MFIMAPStoreGmailLabelsOperation : MFIMAPStoreOperation

@property (readonly, copy, nonatomic) NSArray *gmailLabelsToSet;
@property (readonly, copy, nonatomic) NSArray *gmailLabelsToClear;

- (id)description;
- (unsigned char)operationType;
- (id)initWithGmailLabelsToSet:(id)a0 gmailLabelsToClear:(id)a1 forUIDs:(id)a2 inMailbox:(id)a3;

@end
