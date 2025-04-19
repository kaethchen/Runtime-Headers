@class NSString, NSDictionary, NSArray, NSNumber, MLModelStructurePath;

@interface MLModelStructureProgramOperation : NSObject

@property (readonly, nonatomic) MLModelStructurePath *path;
@property (readonly, copy, nonatomic) NSString *milTextLocation;
@property (readonly, copy, nonatomic) NSNumber *milId;
@property (readonly, copy, nonatomic) NSString *operatorName;
@property (readonly, copy, nonatomic) NSDictionary *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;
@property (readonly, copy, nonatomic) NSArray *blocks;

- (void).cxx_destruct;
- (id)initWithMILOperation:(const void *)a0 path:(const void *)a1;
- (id)initWithOperatorName:(id)a0 inputs:(id)a1 outputs:(id)a2 blocks:(id)a3 path:(id)a4 milTextLocation:(id)a5 milId:(id)a6;

@end
