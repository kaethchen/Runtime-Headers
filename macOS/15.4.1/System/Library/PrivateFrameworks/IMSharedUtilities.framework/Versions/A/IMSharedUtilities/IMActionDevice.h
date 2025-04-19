@interface IMActionDevice : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0;

@end
