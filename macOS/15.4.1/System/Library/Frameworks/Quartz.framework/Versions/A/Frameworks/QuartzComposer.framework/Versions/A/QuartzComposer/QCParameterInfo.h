@interface QCParameterInfo : NSObject {
    int type;
    unsigned long long size;
}

+ (id)infoWithType:(int)a0 size:(unsigned long long)a1;
+ (id)skipParameter;

- (BOOL)isEqualTo:(id)a0;
- (id)initWithType:(int)a0 size:(unsigned long long)a1;

@end
