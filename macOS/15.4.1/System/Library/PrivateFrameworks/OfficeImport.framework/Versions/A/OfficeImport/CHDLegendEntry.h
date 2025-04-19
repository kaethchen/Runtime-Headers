@class EDResources;

@interface CHDLegendEntry : NSObject {
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (id)description;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)a0;
- (id)initWithResources:(id)a0;
- (unsigned int)entryIndex;
- (unsigned long long)fontIndex;
- (void)setEntryIndex:(unsigned int)a0;
- (void)setFontIndex:(unsigned long long)a0;

@end
