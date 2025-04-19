@class NSString;

@interface UPResultLeafNode : UPResultNode

@property (readonly, copy) NSString *text;
@property (readonly, copy) NSString *semanticValue;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithLabel:(id)a0 andText:(id)a1 andSemanticValue:(id)a2;

@end
