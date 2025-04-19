@interface TSUTextEncodingConverter : NSObject {
    unsigned int _from;
    unsigned int _to;
    struct OpaqueTECObjectRef { } *_converter;
}

@property (readonly, nonatomic) unsigned long long from;
@property (readonly, nonatomic) unsigned long long to;

- (unsigned long long)from;
- (unsigned long long)to;
- (id)initWithEncoding:(unsigned long long)a0;
- (id)convert:(id)a0;
- (id)convertToString:(id)a0;
- (id)initWithEncoding:(unsigned long long)a0 to:(unsigned long long)a1;

@end
