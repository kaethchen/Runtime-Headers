@interface PS190CalculateCRC32Command : PS190Command

- (id)description;
- (unsigned int)responseSize;
- (id)initWithBlockStartNumber:(unsigned char)a0 blockEndNumber:(unsigned char)a1;

@end
