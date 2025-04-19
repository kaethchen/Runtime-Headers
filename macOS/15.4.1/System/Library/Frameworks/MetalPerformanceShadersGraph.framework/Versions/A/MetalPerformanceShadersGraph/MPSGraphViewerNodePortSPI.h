@class NSString, NSArray;

@interface MPSGraphViewerNodePortSPI : MPSGraphObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned long long valueRef;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 dataType:(unsigned int)a1 shape:(id)a2 valueRef:(unsigned long long)a3;

@end
