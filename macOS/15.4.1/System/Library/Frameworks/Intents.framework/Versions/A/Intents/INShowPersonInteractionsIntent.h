@class NSString, INPerson;

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport>

@property (copy) INPerson *person;
@property (copy) NSString *focusItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPerson:(id)a0 focusItemIdentifier:(id)a1;

@end
