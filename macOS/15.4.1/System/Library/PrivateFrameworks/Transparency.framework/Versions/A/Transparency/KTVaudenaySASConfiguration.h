@class NSString, NSData;

@interface KTVaudenaySASConfiguration : NSObject

@property const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; int x8; } *di;
@property (retain) NSString *name;
@property (retain) NSData *digestPrefix;
@property int shortCodeLength;
@property unsigned long long shortCodeMod10;

+ (id)sha256Transparency;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 digestPrefix:(id)a1 shortCodeLength:(int)a2 digest:(const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; int x8; } *)a3;

@end
