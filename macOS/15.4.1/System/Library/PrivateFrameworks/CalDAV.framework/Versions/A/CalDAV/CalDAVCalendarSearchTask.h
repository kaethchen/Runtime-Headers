@class NSDictionary, NSArray, NSString;

@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
    unsigned long long _limit;
    NSDictionary *_additionalAuthenticationHeaders;
}

@property (readonly, retain, nonatomic) NSDictionary *urlsToResults;

- (void).cxx_destruct;
- (void)setLimit:(unsigned long long)a0;
- (id)requestBody;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithLanguages:(id)a0 location:(id)a1 calendarType:(id)a2 url:(id)a3;
- (void)setAdditionalAuthenticationHeaders:(id)a0;

@end
