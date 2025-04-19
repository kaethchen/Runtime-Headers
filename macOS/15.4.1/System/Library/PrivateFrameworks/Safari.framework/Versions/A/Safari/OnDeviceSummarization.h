@class NSString;

@interface OnDeviceSummarization : NSObject {
    void /* unknown type, empty encoding */ summary;
}

@property (class, nonatomic) BOOL isRestricted;

@property (nonatomic, copy) NSString *summary;
@property (nonatomic) void /* unknown type, empty encoding */ isSafe;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

+ (BOOL)isSummarizationAvailabileForLanguageCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)requestSummaryForString:(id)a0;

@end
