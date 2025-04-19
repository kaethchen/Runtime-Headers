@class NSString;

@interface CNContactRelationLocalizationProviderImpl : NSObject <CNContactRelationLocalizationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredLanguages;
+ (id)supplementalLabelDictionaryPairsForLanguages:(id)a0 bundlePath:(id)a1;


@end
