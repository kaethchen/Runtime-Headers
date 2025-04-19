@class NSDateFormatter;

@interface StdoutLoggingFormatter : TMLoggingFormatter {
    NSDateFormatter *dateFormatter;
}

+ (id)formatter;

- (id)init;
- (void).cxx_destruct;
- (id)stringForRecord:(id)a0;

@end
