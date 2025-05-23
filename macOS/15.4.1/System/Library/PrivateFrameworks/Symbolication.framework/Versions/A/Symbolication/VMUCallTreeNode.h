@class NSString;

@interface VMUCallTreeNode : NSObject {
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned long long _numBytes;
    unsigned int _count;
    unsigned int _numChildren;
    void *_children;
}

+ (id)makeFakeRootForNode:(id)a0;
+ (id)nodeWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3;
+ (id)rootForSamples:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
+ (id)rootForSamples:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 sampler:(id)a2 options:(unsigned long long)a3;

- (void)dealloc;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned int)count;
- (id)parent;
- (unsigned long long)address;
- (void)addChild:(id)a0;
- (id)childAtIndex:(unsigned int)a0;
- (void)setChildren:(id)a0;
- (id)browserName;
- (void)getBrowserName:(id)a0;
- (void)countFunctionOccurrencesInTree:(id)a0;
- (id)findOrAddChildWithName:(id)a0 address:(unsigned long long)a1;
- (void)_printCallTreeToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 cumulativeOutput:(id)a1 indentString:(id)a2 branchPointCount:(unsigned int)a3 topFunctions:(id)a4 options:(unsigned long long)a5;
- (id)allChildren;
- (BOOL)callTreeHasBranches;
- (id)chargeLibrariesInSet:(id)a0 toCaller:(id)a1 parentLibrary:(id)a2;
- (id)chargeLibrariesToCallers:(id)a0 keepBoundaries:(BOOL)a1;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)a0;
- (long long)comparePuttingMainThreadFirst:(id)a0;
- (long long)comparePuttingRetainCycleNodesAtTop:(id)a0;
- (long long)compareSizeAndCount:(id)a0;
- (id)filterOutSymbols:(id)a0;
- (id)filterOutSymbols:(id)a0 required:(id)a1;
- (id)findOrAddChildWithName:(id)a0 address:(unsigned long long)a1 nodeSearchType:(int)a2 isLeafNode:(BOOL)a3;
- (id)fullOutputWithThreshold:(unsigned int)a0;
- (id)fullOutputWithThreshold:(unsigned int)a0 showPseudoNodes:(BOOL)a1;
- (id)initWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3;
- (id)invertedNode;
- (BOOL)isMallocBlockContentNode;
- (BOOL)isPseudo;
- (id)largestTopOfStackPath;
- (id)nameWithStringsForSymbol:(id)a0 library:(id)a1 loadAddress:(id)a2 offset:(id)a3 address:(id)a4 suffix:(id)a5;
- (id)nameWithoutOffset;
- (unsigned long long)numBytes;
- (unsigned int)numChildren;
- (void)parseNameIntoSymbol:(id *)a0 library:(id *)a1 loadAddress:(unsigned long long *)a2 offset:(unsigned long long *)a3 address:(unsigned long long *)a4 suffix:(id *)a5;
- (void)printCallTree;
- (void)printCallTreeToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)printCallTreeToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 cumulativeOutput:(id)a1 options:(unsigned long long)a2;
- (id)pruneCount:(unsigned int)a0;
- (id)pruneMallocSize:(unsigned long long)a0;
- (id)pseudoName;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildren;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)a0 withCompare:(SEL)a1;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)a0;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)a0 showPseudoNodes:(BOOL)a1;
- (id)stringFromCallTreeWithOptions:(unsigned long long)a0;
- (unsigned int)sumOfChildCounts;
- (BOOL)symbolNameIsUnknown;

@end
