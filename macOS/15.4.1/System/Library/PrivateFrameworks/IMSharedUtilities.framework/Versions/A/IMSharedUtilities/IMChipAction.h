@interface IMChipAction : NSObject <IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ suggestion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ action;

+ (BOOL)actionIsSupported:(long long)a0;
+ (id)actionWithType:(long long)a0 dictionary:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSuggestion:(id)a0 type:(long long)a1 action:(id)a2;
- (id)suggestedActionBody;

@end
