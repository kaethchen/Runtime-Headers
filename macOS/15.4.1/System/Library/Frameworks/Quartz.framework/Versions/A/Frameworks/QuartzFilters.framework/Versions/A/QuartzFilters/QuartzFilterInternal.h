@class QuartzFilter, NSMutableDictionary, NSURL, QuartzFilterOwner, QFilter;

@interface QuartzFilterInternal : NSObject {
    QuartzFilter *mQuartzFilter;
    QuartzFilterOwner *mOwner;
    NSURL *mURL;
    NSMutableDictionary *mProperties;
    QFilter *mQFilter;
    NSMutableDictionary *mContextDict;
}

+ (id)newWithProperties:(id)a0 quartzFilter:(id)a1;
+ (id)newWithOutputIntents:(id)a0 quartzFilter:(id)a1;
+ (id)newWithURL:(id)a0 quartzFilter:(id)a1;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)setOwner:(id)a0;
- (void)setURL:(id)a0;
- (id)url;
- (id)owner;
- (id)properties;
- (id)contextDictionary;
- (BOOL)applyToContext:(struct CGContext { } *)a0;
- (void)flushDerivables;
- (id)qfilter;
- (void)filterNotification:(id)a0 type:(int)a1 info:(void *)a2;
- (id)initWithOutputIntents:(id)a0 quartzFilter:(id)a1;
- (id)initWithProperties:(id)a0 quartzFilter:(id)a1;
- (id)initWithURL:(id)a0 quartzFilter:(id)a1;
- (id)quartzfilter;

@end
