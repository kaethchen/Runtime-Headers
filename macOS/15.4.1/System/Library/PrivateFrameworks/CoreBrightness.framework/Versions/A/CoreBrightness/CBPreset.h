@class NSData, NSDictionary;

@interface CBPreset : NSObject {
    NSDictionary *_dict;
}

@property (readonly) BOOL trueToneDisabled;
@property (readonly) BOOL nightShiftDisabled;
@property (readonly) BOOL autoBrighnessDisabled;
@property (readonly) BOOL brightnessDisabled;
@property (readonly) BOOL referenceMode;
@property (readonly) float maxSDRLuminance;
@property (readonly) NSData *identifier;

+ (id)newActive:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDict:(id)a0;
- (BOOL)isEqualToPreset:(id)a0;

@end
