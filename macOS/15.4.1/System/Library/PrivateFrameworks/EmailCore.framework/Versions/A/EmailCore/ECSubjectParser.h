@interface ECSubjectParser : NSObject

+ (unsigned long long)prefixLengthForSubject:(id)a0;
+ (id)subjectWithoutPrefixForSubject:(id)a0;
+ (unsigned long long)_fastPrefixLengthForSubject:(id)a0 includingPrefix:(long long)a1;
+ (unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)a0;
+ (unsigned long long)_prefixLengthForSubject:(id)a0 forPrefix:(long long)a1;
+ (unsigned long long)prefixLengthForSubject:(id)a0 includingPrefix:(long long)a1;
+ (BOOL)subjectHasForwardPrefix:(id)a0;
+ (BOOL)subjectHasReplyPrefix:(id)a0;
+ (id)subjectWithoutPrefixForSubject:(id)a0 prefix:(id *)a1;
+ (id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)a0 prefix:(id *)a1;

@end
