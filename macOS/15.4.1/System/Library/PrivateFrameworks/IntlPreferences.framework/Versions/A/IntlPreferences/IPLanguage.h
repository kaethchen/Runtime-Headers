@class NSString;

@interface IPLanguage : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *localizedStringForName;
@property (readonly, nonatomic) IPLanguage *minimizedLanguage;

+ (id)IPLanguagesWithLanguages:(id)a0 normalize:(BOOL)a1;
+ (id)languageWithIdentifier:(id)a0;
+ (id)languageWithIdentifier:(id)a0 normalize:(BOOL)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
