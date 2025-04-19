@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initRequestForBodyFormat:(int)a0 withBodySizeLimit:(int)a1;

@end
