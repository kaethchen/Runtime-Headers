@class NSString;

@interface PXPhotoStyleElement : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ semanticStyle;
    void /* unknown type, empty encoding */ legacyFilter;
    void /* unknown type, empty encoding */ _contentVersion;
    void /* unknown type, empty encoding */ observable;
}

@property (nonatomic, readonly) NSString *defaultName;
@property (nonatomic, readonly) double tone;
@property (nonatomic, readonly) double color;
@property (nonatomic, readonly) double intensity;
@property (nonatomic, readonly) NSString *cast;
@property (nonatomic, readonly) double defaultTone;
@property (nonatomic, readonly) double defaultColor;
@property (nonatomic, readonly) double defaultIntensity;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) BOOL hasNonDefaultValues;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)resetToDefaultValues;
- (BOOL)updateWithTone:(double)a0 color:(double)a1 intensity:(double)a2;

@end
