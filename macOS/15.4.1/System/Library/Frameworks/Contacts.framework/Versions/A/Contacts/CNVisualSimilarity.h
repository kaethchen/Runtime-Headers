@interface CNVisualSimilarity : NSObject

+ (id)log;
+ (id)fingerprintForData:(id)a0;
+ (id)fingerprintForImageRequestHandler:(id)a0;
+ (BOOL)isData:(id)a0 similarTo:(id)a1;
+ (BOOL)isFingerprint:(id)a0 similarTo:(id)a1;
+ (BOOL)isFingerprint:(id)a0 similarTo:(id)a1 threshold:(double)a2;

@end
