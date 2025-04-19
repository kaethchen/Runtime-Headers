@interface KHSettingsNumberFormatter : NSNumberFormatter

@property (nonatomic) int formatType;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;

@end
