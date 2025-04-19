@class NSString;

@interface CLKPreferences : NSObject

@property BOOL isAnalog;
@property (retain) NSString *dateFormat;
@property (nonatomic) BOOL flashDateSeparators;

+ (id)_defaultDateFormatWithLocale:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initWithLocale:(id)a0;
- (id)_extraDescription;

@end
