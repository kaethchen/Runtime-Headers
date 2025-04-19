@class NSMutableDictionary;

@interface _SOAPParserFrame : NSObject

@property (retain, nonatomic) id value;
@property (retain, nonatomic) Class type;
@property (retain, nonatomic) NSMutableDictionary *inlineArraysByPropertyName;

- (id)description;
- (void).cxx_destruct;

@end
