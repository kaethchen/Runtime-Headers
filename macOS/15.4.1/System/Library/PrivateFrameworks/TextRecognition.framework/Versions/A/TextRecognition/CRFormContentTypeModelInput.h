@class MLMultiArray, NSSet;

@interface CRFormContentTypeModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *fields;
@property (retain, nonatomic) MLMultiArray *labels;
@property (retain, nonatomic) MLMultiArray *length;
@property (retain, nonatomic) MLMultiArray *num_labels;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithFieldArray:(id)a0 labelArray:(id)a1 fieldCount:(unsigned long long)a2 labelCount:(unsigned long long)a3 useFloatOnly:(BOOL)a4;

@end
