@class NSString, NSArray;

@interface MPSGraphViewerSPI : MPSGraphObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *nodes;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 nodes:(id)a1;

@end
