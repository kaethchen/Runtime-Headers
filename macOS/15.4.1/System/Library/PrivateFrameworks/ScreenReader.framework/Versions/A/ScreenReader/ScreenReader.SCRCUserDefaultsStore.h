@class NSString;

@interface ScreenReader.SCRCUserDefaultsStore : NSObject

@property (class, nonatomic, copy) NSString *rateName;
@property (class, nonatomic, copy) NSString *pitchName;
@property (class, nonatomic, copy) NSString *volumeName;

+ (void)setRotorWithValue:(float)a0 forKey:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
