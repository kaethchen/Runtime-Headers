@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithIdentifier:(id)a0;
- (void)increment;
- (void)resetCount;

@end
