@class NSString;

@interface FASettingsPresetPropertyCondition : NSObject {
    void /* unknown type, empty encoding */ sourceProperty;
}

@property (nonatomic, readonly) NSString *sourceProperty;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ operand;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ result;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSourceProperty:(id)a0 operand:(id)a1 result:(id)a2;

@end
