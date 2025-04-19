@class NSArray, NSSet, NSDictionary;

@interface ExtensionWebsiteAccess : NSObject <NSSecureCoding> {
    NSSet *_allDomainPatternsSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int accessLevel;
@property (readonly, nonatomic) NSArray *allowedDomains;
@property (readonly, nonatomic) struct Vector<Safari::ExtensionDomainPattern, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; } allowedDomainPatterns;
@property (readonly, nonatomic) NSArray *allowedDomainsForHeaderInjection;
@property (readonly, nonatomic) struct Vector<Safari::ExtensionDomainPattern, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; } allowedDomainPatternsForHeaderInjection;
@property (readonly, nonatomic) NSArray *allowedContentScriptDomains;
@property (readonly, nonatomic) NSArray *allowedStyleSheetDomains;
@property (readonly, copy, nonatomic) NSArray *allowedContentScriptDomainPatterns;
@property (readonly, copy, nonatomic) NSArray *allowedStyleSheetDomainPatterns;
@property (readonly, nonatomic) NSSet *allDomainPatternsSet;
@property (readonly, nonatomic) BOOL hasInjectedContent;
@property (readonly, nonatomic) BOOL specifiedPresenceOfInjectedContent;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_domainsFromURLPatterns:(id)a0;
- (id)_generateArrayWithAllowedDomainPatterns:(struct Vector<Safari::ExtensionDomainPattern, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a0;
- (void)addAllowedContentScriptDomainPatterns:(id)a0;
- (void)addAllowedStyleSheetDomainPatterns:(id)a0;
- (BOOL)canAccessURL:(id)a0;
- (BOOL)requiresAccessToAdditionalWebsitesThan:(id)a0;

@end
