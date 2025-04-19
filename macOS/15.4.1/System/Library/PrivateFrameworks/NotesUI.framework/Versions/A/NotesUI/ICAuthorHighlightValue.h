@class NSNumber, NSColor;

@interface ICAuthorHighlightValue : NSObject

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
