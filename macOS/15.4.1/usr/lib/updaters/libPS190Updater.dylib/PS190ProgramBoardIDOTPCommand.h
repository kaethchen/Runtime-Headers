@interface PS190ProgramBoardIDOTPCommand : PS190Command

@property (readonly) unsigned int boardID;

- (id)description;
- (id)initWithBoardID:(unsigned int)a0;

@end
