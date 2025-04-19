@class NSString;

@interface WBSPerSitePreference : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)localizedStringForBinaryPreferenceValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
