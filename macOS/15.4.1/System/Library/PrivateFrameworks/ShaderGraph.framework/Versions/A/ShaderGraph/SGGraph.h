@class NSString, NSArray;

@interface SGGraph : NSObject <SGHasIO> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ nodes;
    void /* unknown type, empty encoding */ nodeMap;
    void /* unknown type, empty encoding */ edges;
    void /* unknown type, empty encoding */ inputs;
    void /* unknown type, empty encoding */ outputs;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ argumentsNode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ resultsNode;
@property (nonatomic, readonly) NSArray *childNodes;
@property (nonatomic, copy) NSArray *edges;
@property (nonatomic, copy) NSArray *inputs;
@property (nonatomic, copy) NSArray *outputs;

+ (id)graphWithName:(id)a0 inputs:(id)a1 outputs:(id)a2;
+ (id)graphWithData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)connect:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)insertNodes:(id)a0 error:(id *)a1;
- (BOOL)connectOutputInputPairs:(id)a0 error:(id *)a1;
- (id)createDotRepresentationWithError:(id *)a0;
- (id)nodeNamed:(id)a0;

@end
