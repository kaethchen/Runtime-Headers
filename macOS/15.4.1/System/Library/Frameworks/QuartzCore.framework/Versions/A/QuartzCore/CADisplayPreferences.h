@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {
    struct CADisplayPreferencesPriv { BOOL x0; int x1; } *_priv;
}

@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;
@property (readonly, nonatomic) int _preferredHdrType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMatchContent:(BOOL)a0 preferredHdrType:(int)a1;
- (id)initWithPreferences:(id)a0;

@end
