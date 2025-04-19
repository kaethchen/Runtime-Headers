@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (double)doubleValue;
- (void).cxx_destruct;
- (unsigned long long)category;
- (long long)int64Value;
- (unsigned long long)availability;
- (const void *)rawBytes;
- (long double)longDoubleValue;
- (unsigned long long)privacy;
- (id)_numValue;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)objectRepresentation;
- (unsigned short)rawBytesLength;
- (unsigned long long)scalarCategory;
- (unsigned long long)scalarType;
- (unsigned long long)unsignedInt64Value;

@end
