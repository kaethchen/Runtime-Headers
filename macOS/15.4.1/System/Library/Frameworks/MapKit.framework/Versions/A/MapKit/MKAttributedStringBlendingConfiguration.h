@class MKAttributedStringVibrancySplitter;

@interface MKAttributedStringBlendingConfiguration : NSObject {
    MKAttributedStringVibrancySplitter *_vibrancySplitter;
    long long _labelBlendingMode;
}

- (void).cxx_destruct;
- (void)applyToBackgroundTextField:(id)a0 foregroundTextField:(id)a1;
- (id)initWithAttributedString:(id)a0 appearance:(id)a1 blendingMode:(long long)a2;

@end
