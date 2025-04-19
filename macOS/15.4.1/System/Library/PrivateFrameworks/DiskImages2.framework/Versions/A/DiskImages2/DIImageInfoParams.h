@class NSDictionary;

@interface DIImageInfoParams : DIBaseParams

@property (copy, nonatomic) NSDictionary *imageInfo;
@property BOOL extraInfo;
@property BOOL openEncryption;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;
- (BOOL)retrieveWithError:(id *)a0;

@end
