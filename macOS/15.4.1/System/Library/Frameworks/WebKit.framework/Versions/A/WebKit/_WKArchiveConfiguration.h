@class NSURL, NSString, NSArray;

@interface _WKArchiveConfiguration : NSObject

@property (copy, nonatomic) NSURL *directory;
@property (copy, nonatomic) NSString *suggestedFileName;
@property (copy, nonatomic) NSArray *exclusionRules;

- (void)dealloc;

@end
