@class NSArray;

@interface _SFLanguageDetectorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *languageConstraints;
@property (readonly, nonatomic) long long alternativesCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguageConstraints:(id)a0 alternativesCount:(long long)a1;

@end
