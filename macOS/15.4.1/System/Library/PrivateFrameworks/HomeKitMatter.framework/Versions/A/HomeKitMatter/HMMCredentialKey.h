@class NSNumber;

@interface HMMCredentialKey : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *credentialType;
@property (retain, nonatomic) NSNumber *credentialIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)credentialStruct;
- (id)initWithCredentialParams:(id)a0;
- (id)initWithCredentialType:(id)a0 andCredentialIndex:(id)a1;

@end
