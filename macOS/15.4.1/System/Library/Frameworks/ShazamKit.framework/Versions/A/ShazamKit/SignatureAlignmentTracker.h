@interface SignatureAlignmentTracker : NSObject

+ (BOOL)FillUnknownError:(id *)a0;
+ (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
+ (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
+ (id)compareQuerySignature:(id)a0 withReferenceSignature:(id)a1 mergeMode:(long long)a2 numHistogramBuckets:(unsigned int)a3 scoreThreshold:(float)a4 boundingBox:(unsigned int)a5 frequencyPenaltyMultiplier:(float)a6 forwardPassOnly:(BOOL)a7 singlePassOnly:(BOOL)a8 refineStartEnd:(BOOL)a9 queryThreshold:(float)a10 error:(id *)a11;
+ (id)signatureAlignmentFromTrackingResult:(struct TrackingResult { struct TrackingAlignment { struct duration<int, std::ratio<1, 125>> { int x0; } x0; struct duration<int, std::ratio<1, 125>> { int x0; } x1; } x0; struct TrackingAlignment { struct duration<int, std::ratio<1, 125>> { int x0; } x0; struct duration<int, std::ratio<1, 125>> { int x0; } x1; } x1; float x2; })a0;

@end
