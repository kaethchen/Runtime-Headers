@class NSString;

@interface KHMagicTreatment : KHTreatment {
    NSString *_swatchPath;
}

+ (id)magicTreatmentForTheme:(id)a0;

- (void)dealloc;
- (id)initWithTheme:(id)a0;
- (id)thumbnailOfType:(unsigned long long)a0;

@end
