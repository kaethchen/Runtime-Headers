@class NSString;

@interface CPKCalculatedGeometry : NSObject

@property (nonatomic) struct CGSize { double width; double height; } minimumItemSize;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long cellCountInRow;
@property (nonatomic) struct CGSize { double width; double height; } margin;
@property (nonatomic) struct CGSize { double width; double height; } drawCellSize;
@property (nonatomic) struct CGSize { double width; double height; } drawCellGap;

+ (id)geometryForEmoji;
+ (id)geometryForEmojiWithCombinedSetting:(BOOL)a0;
+ (id)geometryForImageGlyphs;
+ (id)geometryForSymbols;

- (id)description;
- (void).cxx_destruct;

@end
