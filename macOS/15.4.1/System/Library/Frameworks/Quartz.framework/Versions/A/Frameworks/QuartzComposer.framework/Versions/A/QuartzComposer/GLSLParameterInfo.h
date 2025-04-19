@interface GLSLParameterInfo : QCParameterInfo {
    int location;
}

+ (id)infoWithType:(int)a0 size:(unsigned long long)a1 location:(int)a2;

- (BOOL)isEqualTo:(id)a0;

@end
