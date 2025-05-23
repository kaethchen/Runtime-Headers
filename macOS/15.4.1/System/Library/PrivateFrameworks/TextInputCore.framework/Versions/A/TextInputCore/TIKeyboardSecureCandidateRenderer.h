@class NSMutableDictionary, NSString, NSArray, CAContext;

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary *_accessibilityLabelCache;
    NSArray *_arrayOfAttributes;
}

@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache;
@property (readonly, nonatomic) CAContext *context;
@property (retain, nonatomic) NSString *localeIdentifier;

+ (id)allRenderers;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)createContext;
- (id)localizedStringForKey:(id)a0;
- (id)initForLocalizedStrings;
- (void)recreateContext;
- (id)_truncationSentinel;
- (id)accessibilityLabelForSlotID:(unsigned int)a0;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (struct __CFArray { } *)arrayOfContexts:(unsigned long long)a0 withRenderTraits:(id)a1;
- (void)cacheAccessibilityLabel:(id)a0 forSlotID:(unsigned int)a1;
- (id)cachedCandidateForSecureCandidate:(id)a0;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)a0;
- (void)clearSecureCandidateCache;
- (struct CGImage { } *)imageForSendCurrentLocationWithRenderTraits:(id)a0;
- (struct __CFArray { } *)imagesFromContexts:(struct __CFArray { } *)a0;
- (struct __CFArray { } *)imagesFromSecureCandidates:(id)a0 withRenderTraits:(id)a1 outAccessibilityLabels:(id *)a2;
- (id)localizedApplicationNameWithBundleIdentifier:(id)a0;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)a0;
- (id)slotIDsFromSecureCandidates:(id)a0 withRenderTraits:(id)a1;
- (id)updateCachedCandidate:(id)a0 withCandidateString:(id)a1;
- (id)updateCachedCandidate:(id)a0 withStickerIdentifier:(id)a1;

@end
