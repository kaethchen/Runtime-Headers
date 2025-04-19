@class NSSet, NSString, INIntentDescription, NSArray, INIntentDescriptor;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
}

@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSSet *supportedIdentifiers;
@property (readonly, nonatomic) NSSet *launchableIdentifiers;
@property (retain, nonatomic) INIntentDescriptor *intentDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEnumerator;

- (void)dealloc;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)localizedAppName;
- (id)intentClassName;
- (id)displayableAppDescriptor;
- (long long)intentCategory;
- (id)intentDescription;
- (id)accessoryIcon;
- (id)slots;
- (id)customImageForBundleIdentifier:(id)a0;
- (id)actionForAppIdentifier:(id)a0;
- (id)customAppNameForBundleIdentifier:(id)a0;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (void)initializeParameters;
- (id)intentDescriptorFromParameterState;
- (id)intentDescriptorWithIntentClassName:(id)a0 launchableBundleId:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (void)selectedAppDidChange;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)supportedAppIdentifiers;
- (id)copyWithSerializedParameters:(id)a0;
- (id)displayableAppIdentifier;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 intentDescription:(id)a3 stringLocalizer:(id)a4;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)launchableAppIdentifier;
- (id)launchableAppIdentifiers;
- (id)selectedAppNotSupportedError;
- (BOOL)shouldBeIncludedInAppsList;

@end
