@class NSString, PGGraphAudioFeatureNodeCollection;

@interface PGGraphAudioFeatureNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (readonly, nonatomic) PGGraphAudioFeatureNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)filterForAudioFeatureLabel:(id)a0;
+ (id)filterForAudioFeatureLabels:(id)a0;
+ (id)momentOfAudioFeature;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
