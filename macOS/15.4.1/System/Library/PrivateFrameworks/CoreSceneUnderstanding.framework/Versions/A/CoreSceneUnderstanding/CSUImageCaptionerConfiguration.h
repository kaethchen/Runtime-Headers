@class CSUImageCaptioningEncoderConfiguration, CSUImageCaptioningDecoderConfiguration;

@interface CSUImageCaptionerConfiguration : NSObject

@property (readonly, nonatomic) CSUImageCaptioningEncoderConfiguration *captioningEncoderConfiguration;
@property (readonly, nonatomic) CSUImageCaptioningDecoderConfiguration *captioningDecoderConfiguration;
@property (readonly, nonatomic) long long revision;

+ (id)CSUImageCaptionerConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)createCSUImageCaptionerConfigurationWithConfigPath:(id)a0 error:(id *)a1;
+ (id)createCSUImageCaptionerConfigurationWithEncoderConfiguration:(id)a0 DecoderConfiguration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithCaptioningEncoderConfiguration:(id)a0 captioningDecoderConfiguration:(id)a1;

@end
