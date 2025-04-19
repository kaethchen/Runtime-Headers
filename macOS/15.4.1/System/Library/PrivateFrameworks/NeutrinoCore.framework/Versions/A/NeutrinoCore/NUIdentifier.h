@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *namespace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)validateName:(id)a0;
+ (id)validNameSpaceRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (id)defaultNamespace;
+ (id)defaultVersion;
+ (id)identifierRegularExpression;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)latestIdentifierWithName:(id)a0;
+ (id)latestIdentifierWithNamespace:(id)a0 name:(id)a1;
+ (id)validNameRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 namespace:(out id *)a1 name:(out id *)a2 version:(out id *)a3;
+ (BOOL)validateNamespace:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)initWithNamespace:(id)a0 name:(id)a1 version:(id)a2;
- (id)identifierWithVersion:(id)a0;

@end
