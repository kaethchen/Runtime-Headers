@class NSString, NSArray;

@interface MPSGraphViewerNodeRegionSPI : MPSGraphObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *returnType;
@property (readonly, nonatomic) NSArray *nodes;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 returnType:(id)a1 nodes:(id)a2;

@end
