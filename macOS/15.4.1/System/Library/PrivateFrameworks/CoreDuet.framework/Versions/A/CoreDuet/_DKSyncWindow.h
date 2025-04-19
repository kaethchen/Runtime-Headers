@class _DKEvent, NSDate;

@interface _DKSyncWindow : NSObject <NSCopying> {
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)choppedWindowsFromSortedNormalizedWindows:(id)a0 betweenWindowMinimumDate:(id)a1 andWindowMaximumDate:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;

@end
