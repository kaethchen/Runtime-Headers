@class NSView, NSISVariable;

@interface _NSViewLFLDVariableChangeRecord : _NSViewLFLDChangeRecord

@property (readonly, nonatomic) NSISVariable *variable;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) NSView *variableDelegate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0 inLayoutEngine:(id)a1;

@end
