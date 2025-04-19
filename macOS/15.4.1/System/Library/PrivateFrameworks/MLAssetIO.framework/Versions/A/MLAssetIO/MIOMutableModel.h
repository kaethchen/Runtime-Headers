@class MIOModelDescription;

@interface MIOMutableModel : MIOModel

@property (copy, nonatomic) MIOModelDescription *modelDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)modelDescription;
- (void)setModelDescription:(id)a0;

@end
