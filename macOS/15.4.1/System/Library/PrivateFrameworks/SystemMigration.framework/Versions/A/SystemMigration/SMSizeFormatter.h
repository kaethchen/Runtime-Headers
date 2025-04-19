@class NSString, NSByteCountFormatter;

@interface SMSizeFormatter : NSFormatter

@property (retain) NSString *formatString;
@property (retain) NSByteCountFormatter *numberFormatter;

- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)initWithPrefixString:(id)a0 localeIdentifier:(id)a1;

@end
