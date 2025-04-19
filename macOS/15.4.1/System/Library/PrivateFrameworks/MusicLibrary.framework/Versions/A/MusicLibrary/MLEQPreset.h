@class NSString;

@interface MLEQPreset : NSObject {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForBuiltInPresetType:(int)a0;
+ (id)eqPresetForName:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (id)localizedName;
- (int)builtInPresetType;
- (id)initWithBuiltInPresetType:(int)a0;
- (int)typeForAVController;

@end
