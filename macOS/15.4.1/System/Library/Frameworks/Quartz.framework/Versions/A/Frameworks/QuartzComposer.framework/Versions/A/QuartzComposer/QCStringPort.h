@class NSString;

@interface QCStringPort : QCPort {
    NSString *_string;
    int _editorType;
    void *_unused3[3];
}

+ (Class)baseClass;

- (void)dealloc;
- (id)stringValue;
- (id)value;
- (void)setStringValue:(id)a0;
- (BOOL)setValue:(id)a0;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (int)editorType;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (void)resetParameterView:(id)a0;
- (void)setEditorType:(int)a0;
- (id)setupParameterView;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipString;

@end
