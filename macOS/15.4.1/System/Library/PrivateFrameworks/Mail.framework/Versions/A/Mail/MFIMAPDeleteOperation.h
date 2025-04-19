@interface MFIMAPDeleteOperation : MFIMAPOperation

- (id)description;
- (unsigned char)operationType;
- (id)initWithMailboxToDelete:(id)a0;

@end
