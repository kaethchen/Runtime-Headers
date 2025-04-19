@interface DAMailboxFetchMessageRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initRequestForBodyFormat:(int)a0 withMessageID:(id)a1 withBodySizeLimit:(int)a2;

@end
