@class NSArray, _MRLanguageOptionGroupProtobuf, NSData, NSDictionary, MRLanguageOption;

@interface MRLanguageOptionGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRLanguageOptionGroupProtobuf *protobuf;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL hasAllowsEmptySelection;
@property (copy, nonatomic) NSArray *languageOptions;
@property (retain, nonatomic) MRLanguageOption *defaultLanguageOption;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithLanguageOptions:(id)a0 defaultLanguageOption:(id)a1 allowsEmptySelection:(BOOL)a2;
- (id)initWithProtobuf:(id)a0;

@end
