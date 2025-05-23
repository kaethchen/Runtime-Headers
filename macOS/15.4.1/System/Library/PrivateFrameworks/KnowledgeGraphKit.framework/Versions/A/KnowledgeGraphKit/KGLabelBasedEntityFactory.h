@class NSMutableDictionary;

@interface KGLabelBasedEntityFactory : NSObject <KGEntityFactory> {
    NSMutableDictionary *_classByNodeLabels;
    NSMutableDictionary *_classByEdgeLabels;
}

@property (retain, nonatomic) Class defaultNodeClass;
@property (retain, nonatomic) Class defaultEdgeClass;

- (id)init;
- (void).cxx_destruct;
- (void)registerEdgeClass:(Class)a0 forLabels:(id)a1;
- (void)registerNodeClass:(Class)a0 forLabels:(id)a1;
- (id)_generateAllPossibleLabelSetsForLabels:(id)a0 labelSetsCache:(id)a1;
- (Class)_selectClassFromPossibleLabels:(id)a0 dictionary:(id)a1;
- (Class)classForEdgeLabels:(id)a0;
- (Class)classForNodeLabels:(id)a0;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;

@end
