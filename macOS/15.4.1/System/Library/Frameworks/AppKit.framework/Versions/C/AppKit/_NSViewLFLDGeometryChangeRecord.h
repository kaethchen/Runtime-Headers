@class NSString, NSValue, NSView;

@interface _NSViewLFLDGeometryChangeRecord : _NSViewLFLDChangeRecord

@property (readonly, nonatomic) NSString *geometricPropertyName;
@property (readonly, nonatomic) NSValue *geometricPropertyValue;
@property (readonly, nonatomic) NSView *currentLayoutView;
@property (readonly, nonatomic) NSString *currentLayoutMethodName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGeometricPropertyName:(id)a0 value:(id)a1 currentLayoutView:(id)a2 methodName:(id)a3;

@end
