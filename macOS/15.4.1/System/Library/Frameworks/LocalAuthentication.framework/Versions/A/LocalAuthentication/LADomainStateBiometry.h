@class NSData;

@interface LADomainStateBiometry : NSObject

@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) NSData *stateHash;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;

@end
