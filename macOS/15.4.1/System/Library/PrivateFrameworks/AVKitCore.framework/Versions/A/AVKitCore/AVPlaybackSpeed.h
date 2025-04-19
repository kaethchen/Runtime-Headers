@class NSArray, NSString;

@interface AVPlaybackSpeed : NSObject {
    BOOL _synthesized;
}

@property (class, readonly, nonatomic) NSArray *systemDefaultSpeeds;

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNumericName;

+ (id)_highToLowSystemDefaultSpeeds;
+ (id)_lowToHighSystemDefaultSpeeds;
+ (id)_rateFormattedAsString:(float)a0 locale:(id)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSynthesized;
- (id)initWithRate:(float)a0 localizedName:(id)a1 synthesized:(BOOL)a2;
- (id)internalDescription;
- (id)initWithRate:(float)a0 localizedName:(id)a1;
- (id)compactLocalizedName;

@end
