@class NSDictionary, NSMutableDictionary;

@interface NUGenericAdjustment : NUAdjustment {
    NSMutableDictionary *_settings;
}

@property (copy, nonatomic) NSDictionary *settings;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithAdjustmentSchema:(id)a0;

@end
