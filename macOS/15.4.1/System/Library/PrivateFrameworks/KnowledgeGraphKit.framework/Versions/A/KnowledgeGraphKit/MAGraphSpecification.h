@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying>

@property long long persistenceOptions;
@property (retain) Class defaultNodeClass;
@property (retain) Class defaultEdgeClass;
@property (retain, nonatomic) MAGraphReference *rootGraphReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
