@class NSNumber, NSColor;

@interface ICAuthorHighlightAnimation : NSObject

@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *fromValue;
@property (copy, nonatomic) NSNumber *toValue;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
