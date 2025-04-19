@interface DDMLTokenType : NSObject

@property (readonly) int classification;
@property (readonly) BOOL beginning;

- (id)debugDescription;
- (id)description;
- (id)initWithClassification:(int)a0 beginning:(BOOL)a1;

@end
