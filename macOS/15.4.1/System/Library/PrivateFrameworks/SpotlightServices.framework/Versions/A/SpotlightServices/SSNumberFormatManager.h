@class NSByteCountFormatter, NSNumberFormatter;

@interface SSNumberFormatManager : NSObject

@property (retain) NSNumberFormatter *numberFormatter;
@property (retain) NSByteCountFormatter *byteCountFormatter;
@property (retain) NSNumberFormatter *currencyFormatter;

+ (void)initialize;
+ (id)stringFromByteCount:(long long)a0;
+ (id)currencyStringWithAmount:(id)a0 currencyCode:(id)a1;
+ (id)stringFromInt:(int)a0 withMinimumDigits:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
