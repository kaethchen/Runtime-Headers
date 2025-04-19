@class NSString, NSArray, NSNumber;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *handleIdentifier;
@property (retain, nonatomic) NSString *photosPersonIdentifier;
@property (retain, nonatomic) NSArray *nameAlternatives;
@property (retain, nonatomic) NSArray *faceAttributes;
@property (retain, nonatomic) NSNumber *personType;
@property (nonatomic) BOOL isPhotosPerson;
@property (copy) NSString *contactIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2 photosPersonIdentifier:(id)a3;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2 photosPersonIdentifier:(id)a3 isPhotosPerson:(BOOL)a4 personType:(long long)a5 nameAlternatives:(id)a6 faceAttributes:(id)a7;

@end
