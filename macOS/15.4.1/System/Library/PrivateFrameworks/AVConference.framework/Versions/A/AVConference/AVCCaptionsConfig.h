@class NSLocale;

@interface AVCCaptionsConfig : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned char usage;

+ (BOOL)isValidUsage:(unsigned char)a0;
+ (id)stringFromUsage:(unsigned char)a0;

- (void)dealloc;
- (id)description;

@end
