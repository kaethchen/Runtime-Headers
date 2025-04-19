@class NSArray;

@interface CBGroupIdentity : CBIdentity

@property (readonly, nonatomic) unsigned int posixGID;
@property (readonly, nonatomic) NSArray *members;
@property (readonly, nonatomic) NSArray *memberIdentities;

+ (id)groupIdentityWithPosixGID:(unsigned int)a0 authority:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_members;
- (id)initGroupWithName:(id)a0 authority:(id)a1;

@end
