@interface RKTextAnnotation : NSObject

@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property unsigned long long type;
@property BOOL machineGenerated;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andType:(unsigned long long)a1 machineGenerated:(BOOL)a2;

@end
