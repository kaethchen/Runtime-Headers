@class NSString;

@interface IMActionOpenWeb : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ parameters;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ mode;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *parameters;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithMode:(long long)a0 url:(id)a1 parameters:(id)a2;

@end
