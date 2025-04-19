@interface PS190CommitFirmwareUpdateCommand : PS190Command

- (id)description;
- (BOOL)causesReset;
- (id)initWithSubcommand:(unsigned char)a0;

@end
