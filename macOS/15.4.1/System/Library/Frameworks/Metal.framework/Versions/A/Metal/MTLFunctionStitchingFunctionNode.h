@class NSString, NSArray;

@interface MTLFunctionStitchingFunctionNode : NSObject <MTLFunctionStitchingNode>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSArray *controlDependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithName:(id)a0 arguments:(id)a1 controlDependencies:(id)a2;

@end
