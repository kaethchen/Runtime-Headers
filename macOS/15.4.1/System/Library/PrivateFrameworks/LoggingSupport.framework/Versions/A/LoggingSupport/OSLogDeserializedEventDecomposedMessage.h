@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (void).cxx_destruct;
- (unsigned long long)state;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (id)placeholderAtIndex:(unsigned long long)a0;
- (unsigned long long)placeholderCount;

@end
