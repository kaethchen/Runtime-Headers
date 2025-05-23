@class NSString;

@interface EQKitMathMLMPadded : EQKitMathMLUnaryNode <EQKitLayoutSchemataPadded>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEmbellishedOperator;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (const void *)mathMLAttributes;
- (id)operatorCore;
- (id)schemataNode;

@end
