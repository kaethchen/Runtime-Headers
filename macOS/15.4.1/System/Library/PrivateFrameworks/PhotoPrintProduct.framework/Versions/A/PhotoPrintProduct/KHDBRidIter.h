@class KHDBRidList;

@interface KHDBRidIter : NSObject <NSCopying> {
    KHDBRidList *m_ridList;
    unsigned long long m_arrayIndex;
    unsigned long long m_lastRid;
    BOOL m_atBegin;
    BOOL m_atEnd;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)count;
- (void)reset;
- (BOOL)atEnd;
- (id)nextRidAsNumber;
- (void)gotoBegin;
- (void)gotoRid:(unsigned long long)a0;
- (id)initWithRidList:(id)a0;
- (BOOL)nextRid:(unsigned long long *)a0;
- (void)setRidList:(id)a0;

@end
