@class NSString;

@interface WKTextExtractionEditable : NSObject {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ placeholder;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *placeholder;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isSecure;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isFocused;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 placeholder:(id)a1 isSecure:(BOOL)a2 isFocused:(BOOL)a3;

@end
