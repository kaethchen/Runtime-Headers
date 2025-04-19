@class NSString;

@interface POWrappedTokenJWTBody : _POJWTBodyBase

@property (readonly) NSString *encapsulatedKey;
@property (readonly) NSString *cipherText;

- (id)mutableCopy;
- (id)cipherText;
- (id)encapsulatedKey;

@end
