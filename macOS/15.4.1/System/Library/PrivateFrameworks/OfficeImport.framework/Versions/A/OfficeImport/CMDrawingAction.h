@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (void)dealloc;
- (id)description;
- (float)floatValue;
- (void).cxx_destruct;
- (int)type;
- (id)value;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;
- (id)initWithType:(int)a0 andValue:(id)a1;

@end
