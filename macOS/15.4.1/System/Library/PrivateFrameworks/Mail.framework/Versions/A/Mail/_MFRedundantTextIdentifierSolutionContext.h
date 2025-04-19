@class NSArray, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableArray;

@interface _MFRedundantTextIdentifierSolutionContext : NSObject {
    NSMutableArray *_redundantRanges;
    NSMutableIndexSet *_redundantAttachmentStartIndexes;
    NSMutableArray *_attributionLineRanges;
}

@property (readonly, nonatomic) struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *replyBuffer;
@property (nonatomic) long long replyStartIndex;
@property (readonly, nonatomic) long long replyLength;
@property (readonly, nonatomic) struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *originalBuffer;
@property (nonatomic) long long originalStartIndex;
@property (readonly, nonatomic) long long originalLength;
@property (readonly, copy, nonatomic) NSDictionary *originalAttachmentContextsByURL;
@property (readonly, copy, nonatomic) NSDictionary *replyAttachmentContextsByURL;
@property (readonly, copy, nonatomic) NSArray *redundantRanges;
@property (readonly, copy, nonatomic) NSIndexSet *redundantAttachmentStartIndexes;
@property (readonly, copy, nonatomic) NSArray *attributionLineRanges;
@property (nonatomic) unsigned long long startingIndexForRedundantRanges;
@property (nonatomic) unsigned long long startingIndexForAttributionLineRanges;
@property (nonatomic) long long lastIndexMatchedInOriginal;
@property (nonatomic) long long lastIndexMatchedInReply;
@property (nonatomic) BOOL searchInForwardDirection;
@property (nonatomic) BOOL matchedEntireOriginalContiguously;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)contentTypeForIndex:(long long)a0;
- (void)computeAttributionRangesInReply;
- (void)addAttributionLineRanges:(id)a0;
- (void)addRangeWithStart:(long long)a0 end:(long long)a1 toArray:(id)a2;
- (void)addRedundantAttachmentStartIndexes:(id)a0;
- (void)addRedundantRanges:(id)a0;
- (void)computeRedundantRangesInReply;
- (id)initWithReply:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a0 replyStartIndex:(long long)a1 replyLength:(long long)a2 replyAttachmentContextsByURL:(id)a3 original:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a4 originalStartIndex:(long long)a5 originalLength:(long long)a6 originalAttachmentContextsByURL:(id)a7 searchInForwardDirection:(BOOL)a8;
- (BOOL)location:(long long)a0 isInRangeArray:(id)a1 startingIndex:(unsigned long long *)a2;

@end
