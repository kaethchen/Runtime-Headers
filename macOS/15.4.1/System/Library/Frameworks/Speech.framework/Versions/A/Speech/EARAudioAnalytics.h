@class NSDictionary;

@interface EARAudioAnalytics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly, copy, nonatomic) NSDictionary *acousticFeatures;
@property (readonly, nonatomic) double snr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnalytics:(id)a0;

@end
