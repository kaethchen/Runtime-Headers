@class NSString, NSArray, NSURL, NSDate, NSData;

@interface _LSConcreteBinding : NSObject <LSBindingComponents, LSIconResourceProvider> {
    struct OpaqueIconRef { } *_iconRef;
}

@property (readonly) unsigned long long variantFlags;
@property (readonly) unsigned long long badge;
@property (readonly) unsigned int typeCode;
@property (readonly) NSString *type;
@property (readonly) unsigned long long cacheingProfile;
@property (readonly) struct { unsigned int x0; unsigned int x1; unsigned int x2; } validationToken;
@property (readonly) NSArray *resources;
@property (readonly) NSArray *decorations;
@property (readonly) BOOL templateVariant;
@property (readonly) BOOL selectedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *type;
@property (readonly) NSString *fileExtension;
@property (readonly) unsigned int typeCode;
@property (readonly) NSDate *contentModificationDate;
@property (readonly) NSURL *url;
@property (readonly) NSData *iconData;
@property (readonly) NSURL *iconURL;
@property (readonly) NSString *kextBundleIdentifier;
@property (readonly) NSString *kextIconName;
@property (readonly, getter=isExecutable) BOOL executable;
@property (readonly, getter=isDirectory) BOOL directory;
@property (readonly, getter=isApplication) BOOL application;
@property (readonly, getter=isPackage) BOOL package;
@property (readonly, getter=isAliasFile) BOOL aliasFile;
@property (readonly, getter=isSymbolicLinkFile) BOOL symbolicLinkFile;
@property (readonly, getter=isVolume) BOOL volume;
@property (readonly) BOOL applicationHasSupportedFormat;
@property (readonly, getter=isApplicationPlaceholder) BOOL applicationPlaceholder;
@property (readonly) BOOL hasCustomIcon;
@property (readonly, getter=isBadgeOnlyVariant) BOOL badgeOnlyVariant;
@property (readonly, getter=isNoBadgeVariant) BOOL noBadgeVariant;
@property (readonly, getter=isTemplateVariant) BOOL templateVariant;
@property (readonly, getter=isSelectedVariant) BOOL selectedVariant;
@property (readonly) struct Binding { void /* function */ **x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; struct __CFData *x5; struct Binding *x6; unsigned long long x7; } *binding;
@property (readonly) struct OpaqueIconRef { } *iconRef;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (struct OpaqueIconRef { } *)iconRef;
- (id)bottomLeftDecoration;
- (id)bottotRightDecoration;
- (id)centerDecoration;
- (struct OpaqueIconRef { } *)copyIconRef;
- (id)copyVariant:(unsigned int)a0;
- (id)dataRepresentationWithOptions:(unsigned long long)a0;
- (void)enumerateIconResourceInfoWithOptions:(id)a0 block:(id /* block */)a1;
- (BOOL)getUpdatedDatabaseUUID:(id *)a0 sequenceNumber:(unsigned long long *)a1;
- (id)initWithBinding:(struct Binding { void /* function */ **x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; struct __CFData *x5; struct Binding *x6; unsigned long long x7; } *)a0;
- (BOOL)isEqualToConcreteBinding:(id)a0;
- (void)overrideWithBinding:(id)a0;
- (BOOL)providesTemplateResources;
- (void)setIconRef:(struct OpaqueIconRef { } *)a0;
- (struct Binding { void /* function */ **x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; struct __CFData *x5; struct Binding *x6; unsigned long long x7; } *)targetBinding;
- (id)topRightDecoration;
- (unsigned int)validationStateWithToken:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a0;

@end
