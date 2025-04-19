@class NSMutableArray, QCPort;

@interface QCSplitter : QCPatch {
    QCPort *_inPort;
    QCPort *_outPort;
    double _min;
    double _max;
    BOOL _useLabels;
    NSMutableArray *_indexLabels;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)_configurePort;
- (BOOL)usesIndexLabels;
- (void)_forwardRenderingFlag;
- (void)_updateMaxIndexFromLabels;
- (void)addIndexLabel;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)indexLabelAtIndex:(unsigned long long)a0;
- (unsigned long long)indexLabelsCount;
- (id)nodeActorForView:(id)a0;
- (Class)portClass;
- (double)portMaxValue;
- (double)portMinValue;
- (void)removeIndexLabelAtIndex:(unsigned long long)a0;
- (void)setIndexLabel:(id)a0 atIndex:(unsigned long long)a1;
- (void)setPortClass:(Class)a0;
- (void)setPortMaxValue:(double)a0;
- (void)setPortMinValue:(double)a0;
- (void)setUsesIndexLabels:(BOOL)a0;

@end
