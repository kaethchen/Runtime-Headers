@class NSString, NSMutableDictionary;

@interface MultipartMessageHeaderField : NSObject

@property (readonly) NSString *value;
@property (readonly) NSMutableDictionary *params;
@property (readonly) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 contentEncoding:(unsigned long long)a1;
- (BOOL)parseHeaderValueBytes:(char *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;

@end
