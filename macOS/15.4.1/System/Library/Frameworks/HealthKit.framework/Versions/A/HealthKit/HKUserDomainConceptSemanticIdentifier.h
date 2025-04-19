@class NSString, HKUserDomainConceptTypeIdentifier;

@interface HKUserDomainConceptSemanticIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)a0;

@end
