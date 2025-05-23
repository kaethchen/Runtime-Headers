@class NSString;

@interface PDHeadersFooters : NSObject {
    BOOL mHasDateTime;
    BOOL mHasNowDateTime;
    BOOL mHasUserDateTime;
    BOOL mHasSlideNumber;
    BOOL mHasHeader;
    BOOL mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (void).cxx_destruct;
- (id)header;
- (void)setHeader:(id)a0;
- (id)footer;
- (void)setFooter:(id)a0;
- (BOOL)hasDateTime;
- (BOOL)hasHeader;
- (BOOL)hasUserDateTime;
- (void)setHasDateTime:(BOOL)a0;
- (BOOL)hasFooter;
- (BOOL)hasNowDateTime;
- (BOOL)hasSlideNumber;
- (void)setHasFooter:(BOOL)a0;
- (void)setHasHeader:(BOOL)a0;
- (void)setHasNowDateTime:(BOOL)a0;
- (void)setHasSlideNumber:(BOOL)a0;
- (void)setHasUserDateTime:(BOOL)a0;
- (void)setUserDateTime:(id)a0;
- (id)userDateTime;

@end
