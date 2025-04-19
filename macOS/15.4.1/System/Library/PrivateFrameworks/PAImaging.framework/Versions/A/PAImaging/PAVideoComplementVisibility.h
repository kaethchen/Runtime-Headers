@interface PAVideoComplementVisibility : NSObject

+ (unsigned short)computeNewVideoComplementState:(unsigned short)a0 implicitlyHidden:(BOOL)a1 hideVideoComplement:(BOOL)a2;
+ (unsigned short)computeNewVideoComplementStateForRevert:(BOOL)a0;
+ (BOOL)isVideoComplementImplicitlyHidden:(id)a0;

@end
