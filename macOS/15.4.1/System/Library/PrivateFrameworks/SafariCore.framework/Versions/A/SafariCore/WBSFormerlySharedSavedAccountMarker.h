@class NSString, NSDictionary;

@interface WBSFormerlySharedSavedAccountMarker : NSObject

@property (readonly, copy, nonatomic) NSString *passwordManagerCredentialIdentifier;
@property (readonly, copy, nonatomic) NSString *nameOfGroupCredentialWasLastSharedIn;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithPasswordManagerCredentialIdentifier:(id)a0 nameOfGroupCredentialWasLastSharedIn:(id)a1;

@end
