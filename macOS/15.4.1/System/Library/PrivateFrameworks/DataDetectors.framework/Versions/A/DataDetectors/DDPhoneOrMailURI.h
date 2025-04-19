@class NSString;

@interface DDPhoneOrMailURI : NSObject {
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
    BOOL _isFileScheme;
}

+ (id)URIWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)value;
- (BOOL)isFile;
- (BOOL)isMail;
- (BOOL)isPhone;
- (BOOL)isHttp;

@end
