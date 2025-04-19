@class NSString, LACEnvironmentMechanism;

@interface LAEnvironmentMechanism : NSObject

@property (readonly, nonatomic) LACEnvironmentMechanism *coreMechanism;
@property (readonly, nonatomic) BOOL isUsable;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iconSystemName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)availabilityError;
- (id)initWithCoreMechanism:(id)a0;

@end
