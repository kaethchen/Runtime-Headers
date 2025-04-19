@class NSArray, NSString, NSLocale;

@interface SFLanguageDetectorResult : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (readonly, copy, nonatomic) NSLocale *dominantLocale;
@property (readonly, copy, nonatomic) NSArray *alternatives;
@property (readonly, copy, nonatomic) NSString *detectedLanguageCode;

- (void).cxx_destruct;
- (id)initWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 dominantLocale:(id)a1 alternatives:(id)a2 detectedLanguageCode:(id)a3;

@end
