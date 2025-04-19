@class AVTPreset, NSString;

@interface AVTPresetStoreDependencyCondition : NSObject

@property (retain, nonatomic) AVTPreset *presetOfOtherCategory;
@property (retain, nonatomic) NSString *specificPresetIdentifier;

- (void).cxx_destruct;
- (id)displayString;

@end
