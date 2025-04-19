@class NSString;

@interface BAReferenceParameter : NSObject {
    void *_storage;
    NSString *_encoding;
    char _modifier;
}

- (void)dealloc;
- (id)descriptor;
- (void *)storage;
- (char)modifier;
- (id)initWithEncoding:(const char *)a0;
- (id)initWithEncoding:(const char *)a0 modifier:(char)a1;

@end
