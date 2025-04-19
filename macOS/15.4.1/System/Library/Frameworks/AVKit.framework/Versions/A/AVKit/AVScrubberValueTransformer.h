@protocol AVScrubberValueTransformerDelegate;

@interface AVScrubberValueTransformer : NSValueTransformer {
    id<AVScrubberValueTransformerDelegate> _delegate;
    struct { BOOL scrubberValueTransformerRequiresTransformation; BOOL scrubberValueTransformer_transformedTimeInterval; BOOL scrubberValueTransformer_reverseTransformedTimeInterval; } _delegateRespondsTo;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
