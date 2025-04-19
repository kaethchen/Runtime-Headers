@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)clear;
- (id)fontAtIndex:(unsigned long long)a0;
- (id)fonts;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (unsigned long long)indexOfFont:(id)a0;

@end
