@class NSData, NSError;

@interface SCSensitivityAnalysis : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _analysis;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL shouldObscureVideo;
@property (nonatomic, readonly) BOOL shouldStore;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) BOOL isContentPreviewable;
@property (nonatomic, readonly) BOOL isContentShareable;
@property (nonatomic, readonly) BOOL shouldFilterStickersAndTapbacks;
@property (nonatomic, readonly) BOOL sensitive;

+ (void)prefetchSensitiveContentPolicy:(void (^)(NSError *))a0;
+ (void)prefetchSensitiveContentPolicy;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isSensitive;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)initMigratingFromNudityDetectionValue:(BOOL)a0;
- (id)initWithAnalysisResult:(id)a0 error:(id *)a1;
- (id)initWithNudityDetectionValue:(BOOL)a0;
- (id)initWithPixelBufferClassificationDictionary:(id)a0 error:(id *)a1;
- (id)transferringStateFromAnalysis:(id)a0;

@end
