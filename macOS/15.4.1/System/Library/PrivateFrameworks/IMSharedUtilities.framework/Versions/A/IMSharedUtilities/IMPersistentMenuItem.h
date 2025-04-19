@interface IMPersistentMenuItem : NSObject <IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ content;

+ (id)contentWithType:(long long)a0 dictionary:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0 content:(id)a1;

@end
