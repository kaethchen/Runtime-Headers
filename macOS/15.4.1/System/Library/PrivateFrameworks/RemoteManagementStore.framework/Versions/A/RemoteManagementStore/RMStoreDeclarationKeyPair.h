@class RMStoreDeclarationKey;

@interface RMStoreDeclarationKeyPair : NSObject

@property (readonly, copy, nonatomic) RMStoreDeclarationKey *applyKey;
@property (readonly, copy, nonatomic) RMStoreDeclarationKey *replaceKey;

+ (id)newDeclarationKeyPairWithNewKey:(id)a0;
+ (id)newDeclarationKeyPairWithUpdateKey:(id)a0 replaceKey:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNewKey:(id)a0 replaceKey:(id)a1;

@end
