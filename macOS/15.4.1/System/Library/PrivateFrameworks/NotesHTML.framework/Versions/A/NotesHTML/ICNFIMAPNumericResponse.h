@interface ICNFIMAPNumericResponse : ICNFIMAPResponse

@property (nonatomic) unsigned long long number;

- (id)description;
- (const char *)_responseName;

@end
