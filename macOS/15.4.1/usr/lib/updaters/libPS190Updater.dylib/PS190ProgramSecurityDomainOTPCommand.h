@interface PS190ProgramSecurityDomainOTPCommand : PS190Command

@property (readonly) unsigned char securityDomain;

- (id)description;
- (id)initWithSecurityDomain:(unsigned char)a0;

@end
