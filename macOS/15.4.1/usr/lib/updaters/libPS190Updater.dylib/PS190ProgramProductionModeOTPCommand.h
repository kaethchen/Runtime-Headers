@interface PS190ProgramProductionModeOTPCommand : PS190Command

@property (readonly) unsigned char productionMode;

- (id)description;
- (id)initWithProductionMode:(unsigned char)a0;

@end
