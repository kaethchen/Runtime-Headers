@class WFContextualActionParameter, WFAppShortcutNamedQueryInfo;
@protocol NSSecureCoding;

@interface WFTopHitItemContextualAction : WFContextualAction <WFDisambiguableContextualAction>

@property (class, readonly) WFTopHitItemContextualAction *disambiguationAction;
@property (class, readonly) WFContextualActionParameter *disambiguationParameter;

@property (readonly, nonatomic) id<NSSecureCoding> item;
@property (readonly, nonatomic) unsigned long long primaryColor;
@property (readonly, nonatomic) WFAppShortcutNamedQueryInfo *namedQueryInfo;

+ (id)supportedBundleIdentifiers;
+ (id)availableCollectionIdentifiers;
+ (void)disambiguationEntriesForCollection:(id)a0 limit:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)disambiguationEntriesForCollection:(id)a0 limit:(long long)a1 error:(id *)a2;
+ (id)disambiguationSummaryStringForCollection:(id)a0;
+ (id)disambiguationSummaryStringWithParameterDefined:(BOOL)a0;
+ (void)getTopHitContextualActionsForType:(unsigned long long)a0 limit:(long long)a1 completion:(id /* block */)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 identifier:(id)a1 wfActionIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 parameters:(id)a4 displayString:(id)a5 title:(id)a6 subtitle:(id)a7 primaryColor:(unsigned long long)a8 icon:(id)a9 accessoryIcon:(id)a10 namedQueryInfo:(id)a11;

@end
