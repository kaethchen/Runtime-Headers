@class NSArray;

@interface SCRStyleInfoAttributesParser : NSObject

@property (retain, nonatomic) NSArray *styleInfoAttributes;

- (void).cxx_destruct;
- (id)_colorAttributesHashTable;
- (id)_parseAXStyleInfoTextAttributes:(id)a0;
- (id)_parseColorAttribute:(id)a0;
- (id)initWithStyleInfoAttributes:(id)a0;
- (id)parseAttributesWithImportance:(id)a0;
- (id)parseValue:(id)a0 forAttribute:(id)a1;

@end
