@class NSString, EQKitSourceAttribution;

@interface EQKitMathMLMEnclose : EQKitMathMLUnaryNode <EQKitLayoutSchemataEnclose> {
    EQKitSourceAttribution *mSourceAttribution;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct Schemata { void /* function */ **x0; int x1; id x2; id x3; })layoutSchemata;
- (const void *)mathMLAttributes;
- (id)schemataRow;
- (void)setSourceAttribution:(id)a0;
- (id)sourceAttribution;

@end
