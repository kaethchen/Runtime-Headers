@class NSString, NSDate;

@interface TSBackgroundFetchJournalEntry : NSObject {
    void /* unknown type, empty encoding */ reason;
    void /* unknown type, empty encoding */ date;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 date:(id)a1;

@end
