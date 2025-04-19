@class NSData;

@interface VUIJSBlob : VUIJSObject <VUIJSBlob> {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
