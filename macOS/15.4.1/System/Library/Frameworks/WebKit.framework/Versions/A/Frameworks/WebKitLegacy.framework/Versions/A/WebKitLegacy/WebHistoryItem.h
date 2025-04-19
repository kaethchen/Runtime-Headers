@class NSString, NSImage, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate *_private;
}

@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (copy, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) NSImage *icon;

+ (void)initialize;
+ (void)_releaseAllPendingPageCaches;
+ (id)entryWithURL:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)URL;
- (id)target;
- (void)setTitle:(id)a0;
- (id)children;
- (id)dictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)a0;
- (void)setViewState:(id)a0;
- (id)RSSFeedReferrer;
- (BOOL)_hasCachedPageExpired;
- (BOOL)_isInBackForwardCache;
- (id)_redirectURLs;
- (void)_visitedWithTitle:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithURLString:(id)a0 title:(id)a1 displayTitle:(id)a2 lastVisitedTimeInterval:(double)a3;
- (id)initWithURLString:(id)a0 title:(id)a1 lastVisitedTimeInterval:(double)a2;
- (id)initWithWebCoreHistoryItem:(void *)a0;
- (BOOL)isTargetItem;
- (BOOL)lastVisitWasFailure;
- (struct CGPoint { double x0; double x1; })scrollPoint;
- (void)setRSSFeedReferrer:(id)a0;

@end
