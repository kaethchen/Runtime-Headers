@class NSString, NSMutableDictionary;

@interface MultipartMessageHeader : NSObject {
    NSString *contentDispositionName;
}

@property (readonly) NSMutableDictionary *fields;
@property (readonly) int encoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 formEncoding:(unsigned long long)a1;

@end
