@class NSString, NSArray;

@interface MPSGraphViewerNodeSPI : MPSGraphObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) NSArray *regions;
@property (retain, nonatomic) NSString *localizedDescription;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithType:(id)a0 inputs:(id)a1 outputs:(id)a2 properties:(id)a3 regions:(id)a4;

@end
