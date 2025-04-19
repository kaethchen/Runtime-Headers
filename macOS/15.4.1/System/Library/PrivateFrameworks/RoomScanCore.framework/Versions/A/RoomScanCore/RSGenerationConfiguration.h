@interface RSGenerationConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isWindowDoorDetectionEnabled) BOOL windowDoorDetectionEnabled;
@property (nonatomic, getter=isObjectBeautificationEnabled) BOOL objectBeautificationEnabled;
@property (nonatomic, getter=isChairBeautificationEnabled) BOOL chairBeautificationEnabled;
@property (nonatomic, getter=isStandardizationEnabled) BOOL standardizationEnabled;
@property (nonatomic, getter=isWallOpeningMergeEnabled) BOOL wallOpeningMergeEnabled;
@property (nonatomic, getter=isOpeningReplaceOpendoorEnabled) BOOL openingReplaceOpendoorEnabled;
@property (nonatomic, getter=isNonUniformHeightEnabled) BOOL nonUniformHeightEnabled;
@property (nonatomic, getter=isOpendoorReplaceOpeningEnabled) BOOL opendoorReplaceOpeningEnabled;
@property (nonatomic, getter=isRoomTypeEnabled) BOOL roomTypeEnabled;
@property (nonatomic, getter=isCurveEnabled) BOOL curveEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
