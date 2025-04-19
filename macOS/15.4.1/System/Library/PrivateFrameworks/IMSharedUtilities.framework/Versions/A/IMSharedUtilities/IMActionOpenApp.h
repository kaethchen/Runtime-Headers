@class NSString;

@interface IMActionOpenApp : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ url;
}

@property (nonatomic, readonly) NSString *url;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithUrl:(id)a0;

@end
