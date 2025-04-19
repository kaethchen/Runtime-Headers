@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (void).cxx_destruct;
- (id)date;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setDate:(id)a0;
- (id)text;
- (id)initWithText:(id)a0;

@end
