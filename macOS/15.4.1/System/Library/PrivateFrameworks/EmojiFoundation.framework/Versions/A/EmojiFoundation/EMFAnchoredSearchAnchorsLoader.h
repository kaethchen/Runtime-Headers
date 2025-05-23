@class NSString, NSArray, EMFAnchoredSearchAnchorCollection, EMFAnchoredSearchAnchorsCache;

@interface EMFAnchoredSearchAnchorsLoader : NSObject

@property (retain, nonatomic) EMFAnchoredSearchAnchorsCache *anchorsCache;
@property (weak, nonatomic) EMFAnchoredSearchAnchorCollection *locallyCachedAnchorCollection;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSArray *leftHandAnchors;
@property (readonly, nonatomic) NSArray *rightHandAnchors;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)_loadAndCacheAnchorsForLocaleIdentifierIfNecessary:(id)a0;

@end
