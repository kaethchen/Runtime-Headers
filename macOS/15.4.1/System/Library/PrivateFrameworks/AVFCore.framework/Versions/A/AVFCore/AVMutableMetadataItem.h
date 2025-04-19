@class NSString, NSDictionary, NSLocale, AVMutableMetadataItemInternal;
@protocol NSObject, NSCopying;

@interface AVMutableMetadataItem : AVMetadataItem {
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) id<NSObject, NSCopying> value;
@property (copy, nonatomic) NSDictionary *extraAttributes;

+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)metadataItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)languageCode;
- (id)key;
- (void)setKey:(id)a0;
- (id)startDate;
- (void)setStartDate:(id)a0;
- (id)keySpace;
- (void)setKeySpace:(id)a0;
- (void)setPreferredStorageLocation:(id)a0;

@end
