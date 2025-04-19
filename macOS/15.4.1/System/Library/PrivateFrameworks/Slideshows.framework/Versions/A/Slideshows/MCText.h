@class MCContainerEffect, NSAttributedString, NSArray;

@interface MCText : MCObject

@property MCContainerEffect *container;
@property (nonatomic) unsigned long long index;
@property (copy) NSAttributedString *attributedString;
@property (retain) NSArray *stringAttributes;

- (id)xmlElement;
- (id)imprint;
- (id)attributedStringWithCTAttributes;
- (id)attributedStringWithNSAttributes;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;

@end
