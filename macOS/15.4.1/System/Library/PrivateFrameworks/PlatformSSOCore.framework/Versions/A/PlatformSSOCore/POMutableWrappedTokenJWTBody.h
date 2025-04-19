@class NSString, NSDictionary;

@interface POMutableWrappedTokenJWTBody : POWrappedTokenJWTBody <POMutableJWTBody>

@property (retain) NSString *encapsulatedKey;
@property (retain) NSString *cipherText;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCipherText:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setEncapsulatedKey:(id)a0;

@end
