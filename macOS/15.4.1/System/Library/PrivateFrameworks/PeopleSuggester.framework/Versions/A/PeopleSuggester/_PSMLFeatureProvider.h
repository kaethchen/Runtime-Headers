@class NSMutableSet, NSMutableDictionary;

@interface _PSMLFeatureProvider : NSObject <NSCopying, MLFeatureProvider> {
    NSMutableDictionary *_featureValues;
}

@property (readonly, nonatomic) NSMutableSet *featureNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithFeatureValues:(id)a0;
- (void)setNumber:(id)a0 forFeature:(id)a1;
- (void)setString:(id)a0 forFeature:(id)a1;
- (void)setValue:(id)a0 forFeature:(id)a1;

@end
