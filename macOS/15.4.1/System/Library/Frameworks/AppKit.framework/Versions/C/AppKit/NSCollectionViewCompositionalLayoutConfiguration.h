@class NSArray, NSString;

@interface NSCollectionViewCompositionalLayoutConfiguration : NSObject <_NSCollectionViewCompositionalLayoutConfiguration, NSCopying> {
    long long _safeAreaReference;
}

@property (nonatomic, getter=_safeAreaReference, setter=_setSafeAreaReference:) long long safeAreaReference;
@property long long scrollDirection;
@property double interSectionSpacing;
@property (copy) NSArray *boundarySupplementaryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;

@end
