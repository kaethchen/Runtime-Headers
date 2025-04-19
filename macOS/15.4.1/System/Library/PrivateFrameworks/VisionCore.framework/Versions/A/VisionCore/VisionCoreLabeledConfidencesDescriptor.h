@class NSURL, NSArray, NSIndexSet;

@interface VisionCoreLabeledConfidencesDescriptor : VisionCoreTensorDescriptor {
    NSArray *_lazilyAcquiredLabels;
    NSIndexSet *_lazilyAcquiredValidLabelIndexs;
}

@property (readonly, nonatomic) Class labelsFileParserClass;
@property (readonly, nonatomic) NSURL *labelsFileURL;
@property (readonly, copy) NSArray *labels;
@property (readonly) unsigned long long validLabelsCount;
@property (readonly, copy) NSIndexSet *validLabelIndexes;
@property (readonly, copy) NSArray *sortedValidLabels;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 shape:(id)a2 strides:(id)a3 labelsFileURL:(id)a4;

@end
