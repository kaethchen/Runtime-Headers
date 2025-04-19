@interface MLITChapterTOC : MLChapterTOC {
    unsigned int _totalTimeInMS;
    void *_chapterDataRef;
    unsigned int *_picCookieIndexMap;
    unsigned int *_urlCookieIndexMap;
    unsigned int *_nameCookieIndexMap;
}

+ (unsigned int **)_chapterDataCookieIndexMapForProperty:(int)a0 ofChapterTOC:(id)a1;
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateChapterTimesInFlattenedChapterData:(id)a0 usingBlock:(id /* block */)a1;

- (void)dealloc;
- (unsigned int)countOfChapters;
- (unsigned int *)_cachedCookieIndexMapForProperty:(int)a0 createIfNecessary:(BOOL)a1;
- (void *)chapterDataRef;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)countOfGroupsForProperty:(int)a0;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (id)initWithChapterDataRef:(void *)a0 totalTimeInMS:(unsigned int)a1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)a0;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)a0;
- (unsigned int)totalTimeInMS;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)a0;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)a0;
- (id)urlTitleTrimmingCharacterSet;

@end
