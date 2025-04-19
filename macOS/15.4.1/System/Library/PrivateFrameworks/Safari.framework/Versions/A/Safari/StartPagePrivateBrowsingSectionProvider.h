@class NSString, NSArray, NSAppearance, StartPageCollectionViewLayoutSection;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPagePrivateBrowsingSectionProvider : NSObject <StartPageCollectionSectionProvider> {
    StartPageCollectionViewLayoutSection *_cachedLayoutSection;
}

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (retain, nonatomic) NSAppearance *backgroundAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
