@class EDResources, NSString, EDWorksheet, EDReference;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    int mWidth;
    BOOL mHidden;
    EDReference *mRange;
    unsigned long long mStyleIndex;
    unsigned char mOutlineLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columnInfoWithResources:(id)a0 worksheet:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (id)style;
- (id)range;
- (void)setRange:(id)a0;
- (void)setWidth:(double)a0;
- (double)width;
- (long long)key;
- (void)setStyle:(id)a0;
- (id)initWithResources:(id)a0 worksheet:(id)a1;
- (unsigned char)outlineLevel;
- (void)setOutlineLevel:(unsigned char)a0;
- (void)setRangeWithFirstColumn:(int)a0 lastColumn:(int)a1;
- (void)setStyleIndex:(unsigned long long)a0;
- (void)setWidthInXlUnits:(int)a0;
- (unsigned long long)styleIndex;
- (int)widthInXlUnits;

@end
