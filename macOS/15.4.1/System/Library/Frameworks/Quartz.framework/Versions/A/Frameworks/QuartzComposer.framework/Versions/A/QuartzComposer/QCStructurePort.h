@interface QCStructurePort : QCObjectPort {
    void *_unused5[4];
}

+ (Class)baseClass;

- (id)value;
- (BOOL)setValue:(id)a0;
- (Class)objectClass;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)a0;
- (BOOL)_printStructure:(id)a0 toString:(id)a1 linePrefix:(id)a2 maxLines:(long long *)a3;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (void)resetParameterView:(id)a0;
- (void)setStructureValue:(id)a0;
- (id)setupParameterView;
- (id)streamValue;
- (id)structureValue;
- (id)tooltipString;

@end
