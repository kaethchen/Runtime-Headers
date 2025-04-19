@class NSData;

@interface CKPackageSection : NSObject

@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSData *verificationKey;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long paddedSize;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithIndex:(long long)a0 signature:(id)a1 size:(unsigned long long)a2 paddedSize:(unsigned long long)a3 verificationKey:(id)a4;

@end
