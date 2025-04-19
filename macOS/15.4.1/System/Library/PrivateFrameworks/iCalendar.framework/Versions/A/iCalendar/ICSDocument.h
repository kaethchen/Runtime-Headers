@class ICSCalendar;

@interface ICSDocument : NSObject {
    ICSCalendar *_calendar;
}

+ (void)suppressParserSyntaxErrorLogging;

- (void).cxx_destruct;
- (id)calendar;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)validate:(id *)a0;
- (id)ICSCompressedDataWithOptions:(unsigned long long)a0;
- (id)ICSDataWithOptions:(unsigned long long)a0;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)initWithCalendar:(id)a0;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 options:(unsigned long long)a2 delegate:(id)a3 error:(id *)a4;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithICSString:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)validateParsedCalendar:(id)a0;

@end
