@class NSString;

@interface PAMediaConversionServiceAddPFMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) NSString *key;
@property (retain) id value;

+ (BOOL)supportsSecureCoding;
+ (id)policyWithKey:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;

@end
