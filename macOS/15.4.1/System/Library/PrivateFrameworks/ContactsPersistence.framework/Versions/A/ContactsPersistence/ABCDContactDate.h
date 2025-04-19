@interface ABCDContactDate : ABCDOwnedObject

- (id)date;
- (void)setDate:(id)a0;
- (void)willRefresh:(BOOL)a0;
- (id)cacheKey;
- (id)dateComponents;
- (long long)dateYear;
- (double)dateYearless;
- (id)normalizedDate;
- (void)setDateComponents:(id)a0;
- (void)setDateYear:(id)a0;
- (void)setDateYearless:(id)a0;
- (void)setNormalizedDate:(id)a0;

@end
