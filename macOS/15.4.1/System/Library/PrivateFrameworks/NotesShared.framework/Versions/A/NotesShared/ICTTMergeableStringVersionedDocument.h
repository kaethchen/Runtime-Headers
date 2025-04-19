@class ICTTMergeableAttributedString;

@interface ICTTMergeableStringVersionedDocument : ICTTVersionedDocument

@property (readonly, nonatomic) ICTTMergeableAttributedString *mergeableString;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void).cxx_destruct;
- (id)initWithMergeableString:(id)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (unsigned long long)mergeWithStringVersionedDocument:(id)a0;
- (id)serializeCurrentVersion:(unsigned int *)a0;

@end
