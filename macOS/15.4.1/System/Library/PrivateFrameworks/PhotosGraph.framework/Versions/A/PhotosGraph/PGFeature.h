@class NSString;

@interface PGFeature : NSObject {
    id _typeSpecificIdentifier;
}

@property (readonly) unsigned long long type;
@property (readonly) NSString *name;
@property (readonly) BOOL isNoneFeature;

+ (id)stringForFeatureType:(unsigned long long)a0;
+ (id)featureWithType:(unsigned long long)a0 name:(id)a1;
+ (id)featuresForEncodedFeatures:(id)a0;
+ (id)featureWithMeaningfulEvent:(id)a0;
+ (id)featureWithNode:(id)a0;
+ (id)featureWithType:(unsigned long long)a0 node:(id)a1;
+ (id)nameForNode:(id)a0;
+ (id)noneFeatureWithType:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodedFeature;
- (id)initWithEncodedFeature:(id)a0;
- (id)nodeInGraph:(id)a0;

@end
