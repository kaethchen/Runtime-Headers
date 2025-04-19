@class NSArray, NSString;

@interface DDMInfo : DDMObject

@property (readonly) NSArray *platforms;
@property (readonly) NSArray *versions;
@property (readonly) NSString *locale;

- (void).cxx_destruct;

@end
