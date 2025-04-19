@interface IMChip : NSObject <IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ chip;

+ (id)chipWithType:(long long)a0 dictionary:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0 chip:(id)a1;

@end
