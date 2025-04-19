@interface PKMutableBOM : PKBOM

- (BOOL)addFile:(id)a0 forBomPath:(id)a1 includeACLs:(BOOL)a2;
- (BOOL)_addAppleDoubleAsNeededForForDirectory:(id)a0 includeACLs:(BOOL)a1 withError:(id *)a2;
- (BOOL)_addAppleDoubleForFile:(id)a0 forBOMPath:(id)a1 withError:(id *)a2;
- (BOOL)_needAppleDoubleForPath:(id)a0 includeACLs:(BOOL)a1;
- (struct __CFArray { } *)_newBOMPatternList:(id)a0;
- (BOOL)addBomPath:(id)a0 fileType:(id)a1;
- (BOOL)commitData;
- (id)initForWritingToPath:(id)a0;
- (id)initWithDirectory:(id)a0 writingToPath:(id)a1 includeACLs:(BOOL)a2 maskPatterns:(id)a3;
- (id)initWithDirectory:(id)a0 writingToPath:(id)a1 includeACLs:(BOOL)a2 maskPatterns:(id)a3 withError:(id *)a4;
- (BOOL)setAttributes:(id)a0 ofItemAtPath:(id)a1;

@end
