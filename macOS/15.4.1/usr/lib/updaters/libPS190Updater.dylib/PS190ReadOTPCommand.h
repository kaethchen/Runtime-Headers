@interface PS190ReadOTPCommand : PS190Command

- (id)description;
- (unsigned int)responseSize;
- (id)initWithSubcommand:(unsigned char)a0;

@end
