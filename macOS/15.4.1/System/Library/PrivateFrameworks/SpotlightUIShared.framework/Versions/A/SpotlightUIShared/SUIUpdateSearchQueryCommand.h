@interface SUIUpdateSearchQueryCommand : SFUpdateSearchQueryCommand

@property (nonatomic) unsigned long long queryKind;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
