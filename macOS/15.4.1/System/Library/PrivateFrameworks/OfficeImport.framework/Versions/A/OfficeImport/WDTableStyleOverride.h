@class WDTableRowProperties, WDDocument, WDStyle, WDParagraphProperties, WDCharacterProperties, WDTableCellProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {
    WDDocument *mDocument;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned char mParagraphPropertiesOverridden : 1;
    unsigned char mCharacterPropertiesOverridden : 1;
    unsigned char mTableRowPropertiesOverridden : 1;
    unsigned char mTableCellStylePropertiesOverridden : 1;
}

@property (weak) WDStyle *style;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (int)part;
- (void)setPart:(int)a0;
- (BOOL)isCharacterPropertiesOverridden;
- (id)mutableTableCellStyleProperties;
- (id)tableProperties;
- (BOOL)isParagraphPropertiesOverridden;
- (id)characterProperties;
- (BOOL)isTableCellStylePropertiesOverridden;
- (BOOL)isTablePropertiesOverridden;
- (BOOL)isTableRowPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)mutableParagraphProperties;
- (id)mutableTableRowProperties;
- (id)paragraphProperties;
- (void)setCharacterPropertiesOverridden:(BOOL)a0;
- (void)setParagraphPropertiesOverridden:(BOOL)a0;
- (void)setTableCellStylePropertiesOverridden:(BOOL)a0;
- (void)setTableRowPropertiesOverridden:(BOOL)a0;
- (id)tableCellStyleProperties;
- (id)tableRowProperties;

@end
