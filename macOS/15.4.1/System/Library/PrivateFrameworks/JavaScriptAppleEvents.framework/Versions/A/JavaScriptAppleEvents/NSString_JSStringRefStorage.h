@interface NSString_JSStringRefStorage : NSObject

@property struct OpaqueJSString { } *jsString;

- (void)dealloc;
- (id)initWithString:(id)a0;

@end
