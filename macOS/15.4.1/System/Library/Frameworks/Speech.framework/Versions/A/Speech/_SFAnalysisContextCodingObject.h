@class NSArray, NSData;

@interface _SFAnalysisContextCodingObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *leftContext;
@property (readonly, copy, nonatomic) NSArray *rightContext;
@property (readonly, copy, nonatomic) NSArray *selectedText;
@property (readonly, copy, nonatomic) NSArray *contextualStrings;
@property (readonly, copy, nonatomic) NSArray *contextualNamedEntities;
@property (readonly, copy, nonatomic) NSData *profileData;
@property (readonly, copy, nonatomic) NSData *jitProfileData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLeftContext:(id)a0 rightContext:(id)a1 selectedText:(id)a2 contextualStrings:(id)a3 contextualNamedEntities:(id)a4 profileData:(id)a5 jitProfileData:(id)a6;

@end
