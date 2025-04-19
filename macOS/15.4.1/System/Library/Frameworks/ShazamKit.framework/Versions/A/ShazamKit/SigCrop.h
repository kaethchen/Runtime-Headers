@interface SigCrop : NSObject

+ (BOOL)FillUnknownError:(id *)a0;
+ (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
+ (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
+ (id)cropSignature:(id)a0 atPosition:(double)a1 withDuration:(double)a2 error:(id *)a3;
+ (BOOL)cropSignature:(id)a0 toDuration:(double)a1 stride:(double)a2 error:(id *)a3 callback:(id /* block */)a4;

@end
