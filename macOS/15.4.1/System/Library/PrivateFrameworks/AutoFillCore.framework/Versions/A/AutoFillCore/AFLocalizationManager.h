@class NSString;

@interface AFLocalizationManager : NSObject

@property (retain, nonatomic) NSString *localeIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (id)accessibilityLabelForAFTextContentType:(id)a0;
- (id)initForLocalizedStrings;
- (id)_truncationSentinel;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;

@end
