@interface CalDrawTileOptions : NSObject <NSCopying>

@property BOOL selected;
@property BOOL dimmed;
@property BOOL declined;
@property BOOL canceled;
@property BOOL maybe;
@property BOOL needsReply;
@property BOOL colorBar;
@property BOOL darkBackground;
@property BOOL fillDot;
@property BOOL large;
@property BOOL flippedForRTL;
@property BOOL reminder;
@property BOOL completed;
@property int reminderStackDepth;
@property BOOL allDay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
