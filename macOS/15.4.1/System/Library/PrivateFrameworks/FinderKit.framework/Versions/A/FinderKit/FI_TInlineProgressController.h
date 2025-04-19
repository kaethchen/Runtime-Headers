@interface FI_TInlineProgressController : NSObject

+ (id)copyProgressImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 iconImageSpec:(const struct IconImageSpec { double x0; double x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
+ (struct TNodeProgressStatus { unsigned int x0; float x1; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; id x7; float x8; long long x9; long long x10; float x11; long long x12; long long x13; })progressStatusForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
