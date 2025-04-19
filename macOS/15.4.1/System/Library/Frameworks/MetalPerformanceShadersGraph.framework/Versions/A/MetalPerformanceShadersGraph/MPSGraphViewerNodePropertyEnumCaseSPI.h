@class NSString;

@interface MPSGraphViewerNodePropertyEnumCaseSPI : MPSGraphObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(unsigned long long)a1;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;

@end
