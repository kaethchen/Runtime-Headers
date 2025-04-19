@interface IMAPNumericResponse : IMAPResponse

@property (nonatomic) unsigned long long number;

- (id)description;
- (const char *)_responseName;

@end
