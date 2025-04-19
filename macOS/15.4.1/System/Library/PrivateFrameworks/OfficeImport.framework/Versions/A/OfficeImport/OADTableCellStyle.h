@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultFill;
+ (id)defaultStyle;

- (id)description;
- (void).cxx_destruct;
- (id)fill;
- (void)setFill:(id)a0;
- (void)setBorderStyle:(id)a0;
- (id)borderStyle;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end
