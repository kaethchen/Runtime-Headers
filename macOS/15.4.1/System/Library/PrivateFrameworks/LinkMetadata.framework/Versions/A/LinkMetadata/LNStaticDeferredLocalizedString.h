@class NSString, _NSLocalizedStringResource, NSURL;

@interface LNStaticDeferredLocalizedString : NSObject <NSCopying, NSSecureCoding, LNStaticDeferredLocalizedString> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _getterLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _localizedStringResourceLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedKey;
@property (readonly, nonatomic) _NSLocalizedStringResource *localizedStringResource;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *defaultValue;
@property (readonly, copy, nonatomic) NSString *table;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)localizedStringForLocaleIdentifier:(id)a0;
- (id)_init;
- (Class)classForKeyedArchiver;
- (id)dictionaryRepresentation;
- (id)_initWithDictionary:(id)a0;
- (id)localizedStringWithPluralizationNumber:(id)a0 forLocaleIdentifier:(id)a1;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 bundleURL:(id)a3;
- (id)initWithLocalizedStringResource:(id)a0;
- (id)initWithKey:(id)a0 table:(id)a1 bundleURL:(id)a2;
- (id)_dictionaryRepresenation;
- (BOOL)hasEqualLocalizedString:(id)a0;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 bundleURL:(id)a3 alternatives:(id)a4;
- (id)initWithLocalizedKey:(id)a0 bundleIdentifier:(id)a1 bundleURL:(id)a2 table:(id)a3;
- (id)initWithLocalizedStringResource:(id)a0 alternatives:(id)a1;
- (id)localizedStringForLocaleIdentifier:(id)a0 bundleURL:(id)a1;
- (id)localizedStringForLocaleIdentifier:(id)a0 kind:(id)a1;
- (id)localizedStringWithReplacements:(id)a0 forLocaleIdentifier:(id)a1;
- (id)unsafeLocalizedStringResource;

@end
