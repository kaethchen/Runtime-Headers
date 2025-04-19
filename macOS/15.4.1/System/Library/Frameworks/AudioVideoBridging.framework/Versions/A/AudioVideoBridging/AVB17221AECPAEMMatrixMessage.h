@interface AVB17221AECPAEMMatrixMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short matrixColumn;
@property (nonatomic) unsigned short matrixRow;
@property (nonatomic) unsigned short regionWidth;
@property (nonatomic) unsigned short regionHeight;
@property (nonatomic) BOOL repeating;
@property (nonatomic) unsigned char direction;
@property (nonatomic) unsigned short valueCount;
@property (nonatomic) unsigned short itemOffset;

+ (id)keyPathsForValuesAffectingDirection;
+ (id)keyPathsForValuesAffectingItemOffset;
+ (id)keyPathsForValuesAffectingMatrixColumn;
+ (id)keyPathsForValuesAffectingMatrixRow;
+ (id)keyPathsForValuesAffectingRegionHeight;
+ (id)keyPathsForValuesAffectingRegionWidth;
+ (id)keyPathsForValuesAffectingRepeating;
+ (id)keyPathsForValuesAffectingValueCount;

- (id)init;
- (unsigned short)regionHeight;
- (unsigned short)regionWidth;
- (unsigned char)direction;
- (void)setDirection:(unsigned char)a0;
- (unsigned short)itemOffset;
- (void)setItemOffset:(unsigned short)a0;
- (BOOL)repeating;
- (void)setRepeating:(BOOL)a0;
- (unsigned short)valueCount;
- (void)setRegionWidth:(unsigned short)a0;
- (unsigned short)matrixColumn;
- (unsigned short)matrixRow;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setMatrixColumn:(unsigned short)a0;
- (void)setMatrixRow:(unsigned short)a0;
- (void)setRegionHeight:(unsigned short)a0;
- (void)setValueCount:(unsigned short)a0;

@end
