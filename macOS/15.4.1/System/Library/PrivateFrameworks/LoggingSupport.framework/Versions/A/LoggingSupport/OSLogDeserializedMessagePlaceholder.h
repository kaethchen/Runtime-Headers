@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (void).cxx_destruct;
- (id)type;
- (int)width;
- (id)tokens;
- (int)precision;
- (id)rawString;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)typeNamespace;

@end
