@class NSString, NSURL, NSArray;

@interface AppExtensionInjectedContent : NSObject

@property (readonly, copy, nonatomic) NSString *contentToInject;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSArray *allowedURLPatterns;
@property (readonly, copy, nonatomic) NSArray *excludedURLPatterns;

- (void).cxx_destruct;
- (id)initWithContentToInject:(id)a0 url:(id)a1 allowedURLPatterns:(id)a2 excludedURLPatterns:(id)a3;

@end
