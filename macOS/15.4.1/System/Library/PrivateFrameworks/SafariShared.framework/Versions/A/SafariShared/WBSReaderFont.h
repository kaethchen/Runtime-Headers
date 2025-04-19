@class NSString;

@interface WBSReaderFont : NSObject <NSCopying> {
    NSString *_displayName;
    NSString *_localizedName;
    BOOL _hasCalculatedLocalizedName;
}

@property (class, readonly, nonatomic) WBSReaderFont *systemFont;
@property (class, readonly, nonatomic) WBSReaderFont *systemSerifFont;

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *familyNameForWebContent;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) long long type;

+ (id)fontWithFamilyName:(id)a0 displayName:(id)a1;
+ (id)systemFontWithDisplayName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_localizedName;
- (struct __CTFontDescriptor { } *)_createFontDescriptorRefForFontFamilyName:(id)a0 restrictToEnabled:(BOOL)a1;
- (id)_initWithFamilyName:(id)a0 displayName:(id)a1 type:(long long)a2;

@end
