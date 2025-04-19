@class NSMutableDictionary;

@interface SCMLImageSanitization : NSObject

@property (nonatomic) BOOL granularOutput;
@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSMutableDictionary *signals;
@property (nonatomic) BOOL regionalSensitive;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGranularOutput:(BOOL)a0;
- (id)unsafeReason;
- (id)updateSignal:(id)a0 withSafe:(BOOL)a1;
- (id)updateSignal:(id)a0 withSafe:(BOOL)a1 withRegionalSensitive:(BOOL)a2;
- (id)updateSignal:(id)a0 withSafe:(BOOL)a1 withScore:(float)a2;

@end
